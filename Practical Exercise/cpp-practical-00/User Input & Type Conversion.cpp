#include <iostream>
#include <string>

using namespace std;

int main() {
  string Name;
  cout << "Enter your name        : ";
  cin >> Name;

  int studentID, age;
  cout << "Enter student number  : ";
  cin >> studentID;

  cout << "Enter your age         : ";
  cin >> age;

  cout << "-------------------------------------" << "\n\n";
  cout << "Summary" << "\n\n";
  cout << "-------------------------------------" << "\n\n";

  cout << "Name        : " << Name << "\n";
  cout << "Student No  : " << studentID << "\n";
  cout << "Year of Birth : " << 2026 - age << "\n";
  cout << "Year at Age 100 : " << 2026 + (100 - age) << "\n";

  return 0;
}