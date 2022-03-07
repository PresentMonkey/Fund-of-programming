#include <iostream>

using namespace std;

int main(){
    int month, day, year;

    cout << "Enter month (numeric form): ";
    cin >> month;
    if(month > 12 or month < 1){
        cout << "Invalid month" << endl;
        return 1;
    }

    cout << "Enter day: ";
    cin >> day;
    if (day > 31 or day < 1){
        cout << "Invalid day" << endl;
        return 1;
    }

    cout << "Enter last 2 digits of year: ";
    cin >> year;

    if((month * day) == year){
        cout << "The date is magic" << endl;
    }
    else{
        cout << "The date is not magical" << endl;
    }

    return 0;

}