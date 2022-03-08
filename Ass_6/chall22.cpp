#include <iostream>
#include <vector>

using namespace std;

struct substance{
    string name;
    int freezingPoint;
    int boilingPoint;
};

vector<substance> substances = {
    {
        "Ethyl Alcohol",
        -173,
        172
    },
    {
        "Mercury",
        -38,
        676
    },
    {
        "Oxygen",
        -362,
        -306
    },
    {
        "Water",
        32,
        212
    }
};

int main(){
    int input;

    vector<string> freezingSubstances;
    vector<string> boilingSubstances;

    cout << "Enter temperature to see substances that will boil and freeze at that temperature (F): ";
    cin >> input;

    for(auto i: substances){
        if(i.boilingPoint <= input){
            boilingSubstances.push_back(i.name);
        }
        if(i.freezingPoint >= input){
            freezingSubstances.push_back(i.name);
        }
    }


    if(freezingSubstances.size() > 0){
        cout << "The substances that would freeze are: ";
        for(auto i: freezingSubstances){
            cout << i << ", "; 
        }
        cout << endl;
    }
    else {
        cout << "No substances freeze at this temperature" << endl;
    }

    if(boilingSubstances.size() > 0){
        cout << "The substances that would boil are: ";
        for(auto i: boilingSubstances){
            cout << i << ", ";
        }
        cout << endl;
    }
    else{
        cout << "No substances boil at this temperature" << endl;
    }
    
    return 0;
}