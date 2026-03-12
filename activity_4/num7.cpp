#include <iostream>
using std::cout;
using std::cin;

int main() {
    int age;

    cout << "\n";
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "YOU ARE NOT QUALIFIED TO VOTE\n";
    } else {
        cout << "YOU ARE QUALIFIED TO VOTE\n";
    }

    return 0;
}