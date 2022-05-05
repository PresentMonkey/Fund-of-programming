#include <iostream>
#include <array>
#include <bits/stdc++.h>

using namespace std;

array<int, 10> values;
int smallest;
int largest;

int main(){
    for(int i =0; i<10;i++){
        cout << "Enter Value " << i << " : ";
        cin >> values[i];
    }

    sort(values.begin(), values.end());
    
    cout << "The largest value is: " << values[9] << endl;
    cout << "THe smallest value is: " << values[0] << endl;

}