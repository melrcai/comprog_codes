#include <iostream>
using std::cout;
using std::cin;

int main() {
    int num;

    cout << "\n";
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0) {
        cout << "DIVISIBLE\n";
    } else {
        cout << "NOT DIVISIBLE\n";
    }

    return 0;
}