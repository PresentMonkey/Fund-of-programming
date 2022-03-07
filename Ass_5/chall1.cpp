#include <iostream>

using namespace std;
int main(){
    int input1;
    cout << "Enter number 1: ";
    cin >> input1;
    int input2;
    cout << "Enter number 2: ";
    cin >> input2;

    if(input1 > input2){
        cout << "The larger number is 1: " << input1 << endl;
    }
    else if(input2 > input1){
        cout << "The larger number is 2: " << input2 << endl;
    }
    else if(input1 == input2){
        cout << "The numbers are the same" << endl;
    }
    else{
        cout << "Unknown error" << endl;
    }
}