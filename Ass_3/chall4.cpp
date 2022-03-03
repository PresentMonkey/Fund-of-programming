#include <iostream>

using namespace std;

int main(){
    float cost = 88.76;
    float tax_percent = 0.0675;
    float tip_percent = 0.20;

    float tax = cost * tax_percent;
    float tip = (cost + tax) * tip_percent;

    cout << "Meal cost: $" << cost << endl;
    cout << "Tax Amount: $" << tax << endl;
    cout << "Tip Amount: $" << tip << endl;
    cout << "Total Bill: $" << cost + tax + tip << endl;

}