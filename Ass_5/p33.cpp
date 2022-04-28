#include <iostream>

using namespace std;

int main(){
    int sales;
    cout << "Enter sales: ";
    cin >> sales;
    int commission;
    if(sales < 10000){
        commission = 10;
    }
    else if((sales >= 10000) and (sales <= 15000)){
        commission = 15;
    }
    else if(sales > 15000){
        commission = 20;
    }
    cout << "Commission is " << commission << "%" << endl;
}