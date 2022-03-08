#include <iostream>
#include <string>
#include <vector>
using namespace std;

float calculate(std::string_view plan, int gigs){
    switch(plan){
        case "A":   
            if(gigs <= 4){
                return 39.99;
            }
            else{
                return 39.99 + (10 * (gigs - 4));
            }
            break;
        case "B":
            if(gigs <= 8){
                return 59.99;
            }
            else{
                return 59.55 + (5 * (gigs - 8));
            }
            break;
        case "C": 
            return 69.99;
    }
}

bool validate_input(string input){
    vector<char> valid_chars = {'A', 'B', 'C'};
    for(auto i: valid_chars){
        if(input.find(i) != std::string::npos){
            return true;
        }
        else{
            return false;
        }
    } 
}

int main(){
    string plan;
    int gigs_used;
    cout << "What package have you purchased? (A, B, C): ";
    cin >> plan;

    if(validate_input(plan)){
        cout << "Invalid input, please try again: " << endl;
        main();
    }
    
    cout << "How many gigs were used?: ";
    cin >> gigs_used;

    if(gigs_used < 0){
        cout << "Invalid input, please try again with a positive number: " << endl;
        main();
    }

    float output = calculate(plan, gigs_used);

    cout << "Your monthly bill will be $" << output << endl;
    
}