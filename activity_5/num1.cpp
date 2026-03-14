#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    char status;
    int age;

    cout << "\n";
    cout << "Prepared by: Marcaida, Melissa D.\n";

    cout << "Enter your membership status (S/s / M/m / N/n): ";
    cin >> status;

    cout << "Enter your age: ";
    cin >> age;

    switch (status) {
      case 'S':
      case 's':
        if (age >= 60) {
          cout << "Your seminar fee is 5";
        } else {
          cout << "Invalid Input: Status S/s is for 60 yrs old and above";
        } break;
      case 'M':
      case 'm':
        if (age <  60) {
          cout << "Your seminar fee is 10";
        } else {
          cout << "Invalid Input: Status S/s is for 60 yrs old and above";
        } break;
      case 'N':
      case 'n':
          cout << "Your seminar fee is 10";
          break;
      default:
      cout << "Input Error: You don't have a membership in this club";
      break;
    }

    return 0;
}