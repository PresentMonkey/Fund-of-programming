#include <iostream>
#include <random>

using namespace std;


string fix_output(int input){
    string int_string = to_string(input);
    if(int_string.length() == 2){
        int_string.insert(0, " ");
    }
    return int_string;

}

int main(){
    random_device rd;
    uniform_int_distribution<> distr(10, 300);

    int first_num = distr(rd);
    int second_num = distr(rd);
    int correct_answer = first_num + second_num;
    int student_input;
    cout << 
    "What is the answer to the following problem: " << endl <<
    "  " << fix_output(first_num) << endl << 
    "+ " << fix_output(second_num) << endl <<
    "―――――" << endl << "  ";

    cin >> student_input;

    if(student_input == correct_answer){
        cout << "Congrats, that is correct" << endl;
    }
    else{
        cout << "Sorry that is incorrect, the correct answer is " << correct_answer << endl;
    }

}

