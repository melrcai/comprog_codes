#include <iostream>
using std::cout;
using std::cin;

int main() {
    int num;

    cout << "\n";
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "EVEN\n";
    } else {
        cout << "ODD\n";
    }

    return 0;
}