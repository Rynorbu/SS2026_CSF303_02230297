#include <iostream>

using namespace std;

int main() {
    string Name;
    Name = "Ranjung Yeshi Norbu";
    int studentNo;
    studentNo = 2230297;

    cout << "Student: " << Name << " | No: " << studentNo << "\n\n";
    cout << "------------------------------------------" << "\n\n";

    int marks[5] = {80, 75, 58, 36, 81};

    int highest = marks[0];
    int lowest = marks[0];
    int sum = 0;

    cout << "Index  Mark  Bar" << "\n";
    for(int i = 0; i < 5; i++) {

        cout << "[" << i << "]    " << marks[i] << "    ";

        // print stars (1 star per 10 marks)
        for(int j = 0; j < marks[i] / 10; j++) {
            cout << "*";
        }

        cout << endl;

        sum = sum + marks[i];

        if(marks[i] > highest)
            highest = marks[i];

        if(marks[i] < lowest)
            lowest = marks[i];
    }

    float average = sum / 5.0;

    int aboveAverage = 0;

    for(int i = 0; i < 5; i++) {
        if(marks[i] > average) {
            aboveAverage++;
        }
    }

    cout << "------------------------------------------" << "\n\n";
    cout << "Highest : " << highest << "\n";
    cout << "Lowest  : " << lowest << "\n";
    cout << "Average : " << average << "\n";
    cout << "Above Average: " << aboveAverage << " mark(s)" << "\n";

  return 0;
}