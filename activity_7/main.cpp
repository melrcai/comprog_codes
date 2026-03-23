#include <iostream>
#include <iomanip>
#include <string>

using std::fixed;
using std::setprecision;
using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::setw;
using std::left;
using std::right;

int main() {


    int screenWidth = 80;
    char choice;
    int passedCount = 0;
    int failedCount = 0;
    int totalProcessed = 0;
    do {
        int studentID; 
        float midtermGrade, finalGrade, averageGrade;
        string studentName;  
        char status[50];

        cout << "\n";
        cout << right << setw(screenWidth) << "POLYTECHNIC UNIVERSITY OF THE PHILIPPINES" << "\n";
        cout << right << setw(screenWidth) << "Anonas St, Santa Mesa, Manila, Metro Manila" << "\n";
        cout << "--------------------------------------------------------------------------------" << "\n";

        cout << left; 
        cout << left << setw(15) << "STUDENT NO." << ":   "; cin >> studentID;

        cin.ignore(1000, '\n');
        cout  << left << setw(15) << "STUDENT NAME" << ":   "; 
        getline(cin, studentName);

        cout << left << setw(15) << "MIDTERM GRADE" << ":   "; cin >> midtermGrade;
        cout << left << setw(15) << "FINAL GRADE" << ":   "; cin >> finalGrade;

        averageGrade =  (midtermGrade + finalGrade) / 2;
        cout << left << setw(15)  << "AVERAGE GRADE" << ":   " << fixed << setprecision(2) << averageGrade << "\n";

        if (averageGrade < 1.0 || averageGrade > 5.0) {
            cout << left << setw(15) << "INVALID GRADE INPUT\n"; 
        } 
        else if (averageGrade <= 3.0) {
            cout << left << setw(15) << "REMARK" << ":   PASSED\n";
            passedCount++;
            totalProcessed++;
        } 
        else {
            cout << left << setw(15) << "REMARK" << ":   FAILED\n";
            failedCount++;
            totalProcessed++;
        }

        cout << left << setw(25) << "\nPROCESS ANOTHER? (Y/N)" << ":   ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\n";
    cout << "--------------------------------------------------------------------------------" << "\n";
    cout << left << setw(25) << "TOTAL STUDENTS PASSED" << ":   " << passedCount << "\n";
    cout << left << setw(25) << "TOTAL STUDENTS FAILED" << ":   " << failedCount << "\n";
    cout << left << setw(25) << "TOTAL PROCESSED"      << ":   " << totalProcessed << "\n";
    cout << "--------------------------------------------------------------------------------" << "\n";
    cout << "PREPARED BY: MARCAIDA, MELISSA DOROTEO\n";
    cout << "--------------------------------------------------------------------------------" << "\n";
    return 0;
}