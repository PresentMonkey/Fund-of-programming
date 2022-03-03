#include <iostream>

using namespace std;

int main(){
    int amount1;
    int amount2;
    cout << "Enter amount 1: ";
    cin >> amount1;
    cout << "Enter amount 2: ";
    cin >> amount2;

    if(amount1 > 10){
        if(amount2 < 100){
            cout << amount2 << endl;
        }
        else{
            cout << "Didn't match if statement" << endl;
        }
    }
    else{
        cout << "Didn't match if statement" << endl;
    }

}