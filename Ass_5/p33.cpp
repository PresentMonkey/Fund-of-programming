#include <iostream>

using namespace std;

int main(){
    int sales;
    cout << "Enter sales: ";
    cin >> sales;
    int commision;
    if(sales < 10000){
        commision = 10;
    }
    else if((sales >= 10000) and (sales <= 15000)){
        commision = 15;
    }
    else if(sales > 15000){
        commision = 20;
    }
    cout << "Commision is " << commision << "%" << endl;
}