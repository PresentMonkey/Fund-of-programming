#include <iostream>

using namespace std;

int names[20];

int main(){
    for(int i=0; i<20; i++){
        names[i]=i;
    }
    for(auto name: names){
        cout << name << endl;
    }
}