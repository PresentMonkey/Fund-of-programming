#include <iostream>
#include <vector>
using namespace std;
int main(){
    int input;
    int sum = 0;
    cout << "Enter a positive integer value: ";
    cin >> input;
    if(input < 0){
        main();
    }
    for(int i = 1; i <= input; i++){
        sum = sum + i;
    }
    cout << "The sum is " << sum << endl;
}