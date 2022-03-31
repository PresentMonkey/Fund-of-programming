#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int ask(){
    int value;
    cout << "Enter number: ";
    cin >> value;
    return value;
}

int main(){
    vector<int> numbers;
    for(int i = 0; i<10; i++){
        numbers.push_back(ask());
    }
    int sum = 0;
    for(auto i: numbers){
        sum = i + sum;
    }
    cout << "The total is: " << sum << endl;
}
