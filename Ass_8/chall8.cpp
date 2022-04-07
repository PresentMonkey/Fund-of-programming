#include <iostream>
using namespace std;

enum menu_item{
    add = 1,
    subtract = 2,
    multiply = 3,
    divide = 4,
    exit = 5
};

struct user_numbers{
    int number1;
    int number2;
};

void display_menu(){
    cout << 
    "Calculator" << endl <<
    "   (1) Add" << endl <<
    "   (2) Subtract" << endl <<
    "   (3) Multiply" << endl <<
    "   (4) Divide" << endl <<
    "   (5) Exit" << endl << endl <<
    "Enter your choice (1-5): ";
}



user_numbers ask(){
    user_numbers return_value;
    cout << "Enter number 1: ";
    cin >> return_value.number1;
    cout << "Enter number 2: ";
    cin >> return_value.number2;
    return return_value;
}

int add(user_numbers input){
    return input.number1 + input.number2;
}

int subtract(user_numbers input){
    return input.number1 - input.number2;
}

int multiply(user_numbers input){
    return input.number1 * input.number2;
}

int divide(user_numbers input){
    if(input.number2 == 0){
        cout << "Cannot divide by a negative! " << endl;
    }
}

void menu(){
    display_menu();
    int input;
    cin >> input;
    if(!(1 <= input and input <= 5)){
        menu();
    }
    user_numbers user_number_input = ask();
    switch(choice){
        case add:{

        }
    }
    
}

int main(){

}