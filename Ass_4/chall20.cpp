#include <iostream>
#include <cmath>

using namespace std;

const float pi = 3.14159;
const float sliceArea = 14.125; //inches

int main(){
    float pizzaDiameter;
    cout << "What is the diameter of the pizza in inches?: ";
    cin >> pizzaDiameter;

    float pizzaRadius = pizzaDiameter / 2;
    float pizzaArea = pi * pow(pizzaRadius, 2);

    int slices = pizzaArea / sliceArea;

    cout << "The possible number of slices is " << slices << endl;

}