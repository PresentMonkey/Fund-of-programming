#include <iostream>

using namespace std;

int main(){
    int input;
    cout << "Enter number: ";
    cin >> input;

    if(0 < input and input < 80){
        cout << "The number is valid." << endl;
    }
    else {
        cout << "The number is invalid." << endl;
    }
    return 0;
}