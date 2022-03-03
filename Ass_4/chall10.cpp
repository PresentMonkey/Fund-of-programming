#include <iostream>

using namespace std;

int main(){
    cout << "What is the value of your building?: ";
    int building_cost;
    cin >> building_cost;

    cout << "You should buy insurance for the minimum amount of: $" << (building_cost * 0.80) << endl;

}