#include <iostream>

using namespace std;

int main() {
    string firstName;
    firstName = "Ranjung";

    string fullName = "Ranjung Yeshi Norbu";

    int lastDigit;
    lastDigit = 7;

    int i, j;

    // Print name N times
    int n = firstName.length();

    cout << "Name repeated ( N times ):" << "\n";

    for(i = 0; i < n; i++) {
        cout << firstName << "\n";
    }

    cout << "\n";

    // Print triangle of stars
    int height = fullName.length();

    cout << "Triangle:" << "\n";

    for(i = 1; i <= height; i++) {
        for(j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";

    // Multiplication table
    cout << "Times Table for " << lastDigit << " (last digit of 2230297):" << "\n";

    for(i = 1; i <= 10; i++) {
        cout << lastDigit << " x " << i << " = " << lastDigit * i << "\n";
    }

  return 0;
}