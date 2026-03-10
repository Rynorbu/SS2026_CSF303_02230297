#include <iostream>

using namespace std;

int main() {
    string Name;
    int studentNo;
    Name = "Ranjung Yeshi Norbu";
    studentNo = 2230297;

    int marks;
    cout << "Enter mark: ";
    cin >> marks;

    cout << "------------------------------" << "\n\n";

    // this is to input validation to check the range
     if (marks < 0 || marks > 100) {
        cout << "Enter a mark between 0 to 100." << "\n";
    } 
    else {

        cout << "Student  : " << Name << " (" << studentNo << ")" << "\n";
        cout << "Mark     : " << marks << "\n";

        // this is the conditional statement to classify the grade based on the marks
        if (marks >= 75) {
            cout << "Grade    : Distinction" << "\n";
            cout << "Result   : Congratulations, " << Name << "! You have passed." << "\n\n";
        }
        else if (marks >= 60) {
            cout << "Grade    : Merit" << "\n";
            cout << "Result   : Congratulations, " << Name << "! You have passed." << "\n\n";
        }
        else if (marks >= 40) {
            cout << "Grade    : Pass" << "\n";
            cout << "Result   : Congratulations, " << Name << "! You have passed." << "\n\n";
        }
        else {
            cout << "Grade    : Fail" << "\n";
            cout << "Result   : Sorry, " << Name << ". You have failed." << "\n\n";
        }
    }

    cout << "------------------------------" << "\n";

    
  return 0;
}