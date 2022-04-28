#include <iostream>

using namespace std;

int main(){
    int width;
    cout << "Enter width of square: ";
    cin >> width;

    for(int i = 0; i < width; i++){
        for(int j = 0; j < width; j++){
            cout << "X ";
            if(j == width - 1){
                cout << endl;
            }
        }
    }
}