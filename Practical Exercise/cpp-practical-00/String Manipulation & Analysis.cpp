#include <iostream>

using namespace std;

int main() {
  string Name;
  Name = "Ranjung Yeshi Norbu";
  cout << "Full Name      : " << Name << "\n";

    //   display the total length 
    cout << "Total Length   : " << Name.length() << "\n"; 

    //   Display the name converted to uppercase and to lowercase.
    string uppercase = "";
    for (char c : Name) {
        uppercase += (char)toupper(c);
    }
    cout << "Uppercase      : " << uppercase << "\n";

    string lowercase = "";
    for (char c : Name) {
        lowercase += (char)tolower(c);
    }
    cout << "Lowercase      : " << lowercase << "\n";
    // Display your initials by extracting the first character of each word.
    string Initials;
    bool newWord = true;
    for (size_t i = 0; i < Name.length(); ++i) {
        if (newWord && isalpha(Name[i])) {
            Initials += toupper(Name[i]);
            newWord = false;
        }
        if (isspace(Name[i])) {
            newWord = true;
        }
    }
    cout << "Initials       : " << Initials << "\n";
    
    // Display the length of your first name only.
    size_t firstSpace = Name.find(' ');
    if (firstSpace != string::npos) {
        cout << "First Name Len : " << firstSpace << "\n";
    } else {
        cout << "First Name Len : " << Name.length() << "\n";
    }

  return 0;
}