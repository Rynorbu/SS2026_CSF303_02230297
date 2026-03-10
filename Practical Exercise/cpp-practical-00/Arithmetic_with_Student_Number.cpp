#include <iostream>
using namespace std;

int main() {
  int Student_no;
  Student_no = 2230297;
  cout << "Student Number    : " << Student_no << "\n";

  int Digit_sum = 0;
  int temp = Student_no;    
    while (temp > 0) {
        Digit_sum += temp % 10;  
        temp /= 10;             
    }
    cout << "Digit Sum         : " << Digit_sum << "\n";
    if (Student_no % 2 == 0) {
        cout << "Odd / Even        : Even" << "\n";
    } else {
        cout << "Odd / Even        : Odd" << "\n";
    }
    cout << "Remainder (% 7)   : " << Student_no % 7 << "\n";
    cout << "Multiplied by 3   : " << Student_no * 3 <<
    "\n";

  return 0;
} 

