#include <iostream>

using namespace std;

int main(){
    int sales;
    cout << "Enter sales: ";
    cin >> sales;
    float commision;
    if(sales < 10000){
        commision = 0.10;
    }
    else if((sales >= 10000) and (sales <= 15000)){
        commision = 0.15;
    }
    else if(sales > 15000){
        commision = 0.20;
    }
    cout << "Commision is " << commision << "%" << endl;
}