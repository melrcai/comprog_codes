#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int choice = 0;
    
    do {
      cout << "\n=====================\n";
      cout << "Select an option\n";
      cout << "1. Add\n";
      cout << "2. Exit\n";
      cout << "Enter your choice: ";
      cin >> choice;
      cout << "\n";

      switch (choice) {

        case 1: {
        int num1, num2;
        int sum = 0;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

          sum = num1 + num2;
          cout << "Answer: " << sum;
          cout << "\n";
        break;
        }
        case 2:
        cout << "You have exited.";
        break;

        default:
        cout << "Invalid input: (Choose 1 - 2)";
      }
    } while(choice != 2);
    return 0;
}