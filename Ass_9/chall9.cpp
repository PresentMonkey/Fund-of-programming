#include <iostream>
#include <array>

using namespace std;

array<long, 7> empId = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
array<int, 7> hours;
array<double, 7> payRate;
array<double, 7> wages;

int main(){
    for(int i =0; i<7; i++){
        cout << "Employee ID: " << empId[i] << endl;
        cout << "Enter hours: ";
        cin >> hours[i];
        cout << "Enter payrate: ";
        cin >> payRate[i];
        wages[i] = hours[i] * payRate[i];
        cout << "-----------------------" << endl;
    }
    for(int i=0; i<7;i++){
        cout << "Employee ID: " << empId[i];
        cout << "Gross Wages: " << empId[i];
    }

}