#include <iostream>
using std::cout;
using std::cin;

int main() {
    char grade;

    cout << "\n";
    cout << "Enter the letter grade (A-F): ";
    cin >> grade;


    grade = toupper(grade);

    switch (grade) {
        case 'A':
            cout << "Excellent\n";
            break;
        case 'B':
            cout << "Above Excellent\n";
            break;
        case 'C':
            cout << "Average\n";
            break;
        case 'D':
            cout << "Below Average\n";
            break;
        case 'F':
            cout << "Failed\n";
            break;
        default:
            cout << "Invalid input! Please enter a grade from A to F.\n";
    }

    return 0;
}