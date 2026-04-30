#include <iostream>
using namespace std;

int main() {
    int proj1, proj2, proj3, proj4, test1, test2;
    int total;
    char grade;
    string name;

    while (true) {
        cout << "First Score (Project 1): ";
        cin >> proj1;

        if (proj1 == -1) {
            cout << "Programmer : " << name;
            cin.ignore();
            getline(cin, name);
            break;
        }

        cout << "Next Score (Project 2) : ";
        cin >> proj2;
        cout << "Next Score (Project 3) : ";
        cin >> proj3;
        cout << "Next Score (Project 4) : ";
        cin >> proj4;
        cout << "Next Score (Test 1) : ";
        cin >> test1;
        cout << "Next Score (Test 2) : ";
        cin >> test2;

        total = proj1 + proj2 + proj3 + proj4 + test1 + test2;

        if (total >= 360) grade = 'A';
        else if (total >= 320) grade = 'B';
        else if (total >= 280) grade = 'C';
        else if (total >= 240) grade = 'D';
        else grade = 'F';

        cout << "\nTotal Points Earned: " << total << endl;
        cout << "Grade: " << grade << endl << endl;
    }

    return 0;
}