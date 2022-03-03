#include <iostream>

using namespace std;

int main(){
    float celsius;
    cout << "Enter Celsius Temperature: ";
    cin >> celsius;

    float fahrenheit = ((9/5)* celsius) + 32;

    cout << "The Fahrenheit temperature is " << fahrenheit << endl; 

}