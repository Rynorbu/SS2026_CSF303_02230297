#include <iostream>

using namespace std;

// this is the function to calculate the sum of digits of a number
int digitSum (int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// this is the function to check if the number is prime or not
bool isPrime (int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}

// this is the function to count the number of vowels in a string
int countVowels (string str) {
    int count = 0;
    for (size_t i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// this is the function to reverse a string
string reverseString (string str) {
    string reversed = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    cout << "==================================================" << "\n\n";

    string Name;
    Name = "Ranjung Yeshi Norbu";
    cout << "Function Results for " << Name << "\n";

    int studentNo;
    studentNo = 2230297;
    cout << "Student Number: " << studentNo << "\n\n";

    cout << "==================================================" << "\n\n";

    cout << "digitSum(" << studentNo << ")                     : "
         << digitSum(studentNo) << "\n";

    cout << "isPrime(" << studentNo << ")                      : "
         << (isPrime(studentNo) ? "Yes" : "No") << "\n";

    cout << "countVowels(" << Name << ")      : "
         << countVowels(Name) << "\n";

    cout << "reverseString(" << Name << ")    : "
         << reverseString(Name) << "\n";

    cout << "========================================\n";



  return 0;
}