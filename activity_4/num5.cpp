#include <iostream>
using std::cout;
using std::cin;

int main() {
    char gender;

    cout << "\n";
    cout << "Enter your gender (m/f): ";
    cin >> gender;

    if (gender == 'm') {
        cout << "HELLO SIR\n";
    } else if (gender == 'f') {
        cout << "HELLO MADAM\n";
    }

    return 0;
}