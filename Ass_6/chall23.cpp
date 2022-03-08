#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void display_menu(){
    cout << 
    "Geometry Calculator" << endl <<
    "   (1) Calculate the Area of a Circle" << endl <<
    "   (2) Calculate the Area of a Rectangle" << endl <<
    "   (3) Calculate the Area of a Triangle" << endl <<
    "   (4) Quit" << endl << endl <<
    "Enter your choice (1-4): ";
}

int menu(){
    int input;
    cin >> input;
    if(!(1 <= input and input <= 4)){
        cout << "Invalid choice, enter again: ";
        menu();
    }
    else{
        return input;
    }
}

float calcCircle(){
    float rad;
    cout << "Enter Radius of circle: "; 
    cin >> rad;
    if(rad < 0){
        cout << "Invalid input, try again" << endl;
        calcCircle();
    }

    return M_PI * pow(rad, 2);
}
float calcRectangle(){
    float length, width;
    cout << "Enter Length of rectangle: ";
    cin >> length;
    cout << "Enter Width or rectangle: ";
    cin >> width;

    if(width < 0 || length < 0){
        cout << "Invalid input, try again" << endl;
        calcRectangle();
    }

    return length * width;
}

float calcTriangle(){
    float base, height;
    cout << "Enter Base of Triangle: ";
    cin >> base;
    cout << "Enter Height of Triangle: ";
    cin >> height;

    if(base < 0 || height < 0){
        cout << "Invalid input, try again" << endl;
        calcTriangle();
    }

    return base * height * 0.5;
}

int main(){
    display_menu();
    int selection = menu();
    float answer;
    switch(selection){
        case 1:
            answer = calcCircle();
            break;
        case 2:
            answer = calcRectangle();
            break;
        case 3:
            answer = calcTriangle();
            break;
        case 4:
            exit(0);
    }

    cout << "The area is " << answer << setprecision(2) << endl << endl;
    main();
}

