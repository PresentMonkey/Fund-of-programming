#include <iostream>
#include <fstream>
#include <array>
#include <string>

using namespace std;

int main(){
    array<string, 10> data;

    for(int i=0; i<10; i++){
        string data_item;
        cout << "Input Data Item: ";
        cin >> data_item;
        data.at(i) = data_item;
    }

    ofstream myFile ("data.txt");
    if(myFile.is_open()){
        for(auto element: data){
            myFile << element << endl;
        }
    }
    myFile.close();

    ifstream myFileIn ("data.txt");
    string text;
    if(myFileIn.is_open()){
        while(getline(myFileIn, text)){
            cout << text << endl;
        }
    }
    myFileIn.close();
}