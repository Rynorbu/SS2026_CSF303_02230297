#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    vector<float> marks;

public:

    // Parameterized constructor
    Student(string n, int sn) {
        name = n;
        studentNumber = sn;
    }

    // Add mark
    void addMark(float m) {
        marks.push_back(m);
    }

    // Calculate average
    float getAverage() {
        float sum = accumulate(marks.begin(), marks.end(), 0.0);
        return sum / marks.size();
    }

    // Highest mark
    float getHighest() {
        return *max_element(marks.begin(), marks.end());
    }

    // Lowest mark
    float getLowest() {
        return *min_element(marks.begin(), marks.end());
    }

    // Print academic report
    void printReport() {

        float avg = getAverage();
        string classification;

        if (avg >= 80)
            classification = "Merit";
        else if (avg >= 60)
            classification = "Pass";
        else
            classification = "Fail";

        cout << "================================================\n\n";
        cout << "  ACADEMIC REPORT\n\n";
        cout << "================================================\n\n";
        cout << "Student Name  : " << name << endl;
        cout << "Student No    : " << studentNumber << endl;
        cout << "Marks Entered : " << marks.size() << endl;

        cout << "Marks         : ";
        for (float m : marks) {
            cout << m << "  ";
        }
        cout << endl;

        cout << "Average       : " << fixed << setprecision(2) << avg << endl;
        cout << "Highest       : " << getHighest() << endl;
        cout << "Lowest        : " << getLowest() << endl;
        cout << "Classification: " << classification << endl;
        cout << "===============================================\n\n";
    }
};

int main() {

    // Create student object
    Student s("Ranjung Yeshi Norbu", 2230297);

    // Add marks
    s.addMark(88);
    s.addMark(76);
    s.addMark(91);
    s.addMark(65);
    s.addMark(83);

    // Print report
    s.printReport();

    return 0;
}