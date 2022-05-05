#include <iostream>

int numArray1[100];
int numArray2[100];

int main(){
    for(int i=0; i<100; i++){
        numArray1[i]=i;
    }
    for(int i=0;i<100;i++){
        numArray2[i] = numArray1[i];
        std::cout << numArray2[i] << std::endl;
    }
}