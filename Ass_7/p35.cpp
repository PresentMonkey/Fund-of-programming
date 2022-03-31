#include <iostream>

using namespace std;

int main(){
    int product;
    cout << "Enter number: ";
    cin >> product;


    while(product < 100){
        product = product * 10;
        cout << product << endl;
    }

}