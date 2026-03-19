#include <iostream>
using std::cout;
using std::cin;

int main() {

    char choice;
    do {
        int num1, num2;
        cout << "\n=====================\n";
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        cout << "Answer: " << num1 + num2 << "\n";

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "You have exited.";
    return 0;
}