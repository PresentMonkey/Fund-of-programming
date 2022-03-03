#include <iostream>

using namespace std;

float test_scores[5];

int main(){
    for(int i=1; i<=5; i++){
        cout << "Enter test score " << i << " : ";
        cin >> test_scores[i];
    }
    float sum = 0;

    for(int i=1; i<=5; i++){
        sum += test_scores[i];
    }
    cout << "Average is: " << sum/5 << endl;


}