#include <iostream>
using std::cout;
using std::cin;

int main() {
    int registrants;
    int fee_per_person = 0;
    int total = 0;

    cout << "\n";
    cout << "Enter the number of registrants: ";
    cin >> registrants;

    if (registrants <= 0) {
        cout << "== Error: Number of registrants must be greater than 0. ==\n";
    } else {

        if (registrants >= 1 && registrants <= 4) {
            fee_per_person = 500;
        } else if (registrants >= 5 && registrants <= 10) {
            fee_per_person = 400;
        } else { // 11 or more
            fee_per_person = 300;
        }

        total = registrants * fee_per_person;

        cout << "Total amount owed by the company: P" << total << "\n";
    }

    return 0;
}