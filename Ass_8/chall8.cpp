#include <iostream>
using namespace std;

enum menu_item{
    add = 1,
    subtract = 2,
    multiply = 3,
    divide = 4,
    exit_option = 5
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

int do_add(user_numbers input){
    return input.number1 + input.number2;
}

int do_subtract(user_numbers input){
    return input.number1 - input.number2;
}

int do_multiply(user_numbers input){
    return input.number1 * input.number2;
}

int do_divide(user_numbers input){
    if(input.number2 == 0){
        cout << "Cannot divide by a negative! " << endl;
    }
    return input.number1 / input.number2;
}

int main(){
    display_menu();
    int input;
    cin >> input;
    if(!(1 <= input and input <= 5)){
        main();
    }
    
    user_numbers user_number_input = ask();
    
    switch(input){
        case add:{
            cout << "Your answer is: " << do_add(user_number_input) << endl; break;
        }
        case subtract:{
            cout << "Your answer is: " << do_subtract(user_number_input) << endl; break;
        }
        case multiply:{
            cout << "Your answer is: " << do_multiply(user_number_input) << endl; break;
        }
        case divide:{
            cout << "Your answer is: " << do_divide(user_number_input) << endl; break;
        }
        case exit_option:{
            exit(0);
        }
    }
    main();
}