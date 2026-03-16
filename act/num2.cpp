#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;
using std::endl;

int main() {
    
    double prelimGrade, midtermGrade, finalGrade;
    double average;

    cout << " " << endl;

    cout << "Prepared by: Melissa D. Marcaida\n";
    cout << "Enter the prelim grade:         ";
    cin >> prelimGrade;
    cout << "Enter the midterm grade:        ";
    cin >> midtermGrade;
    cout << "Enter the final grade:          ";
    cin >> finalGrade;

    average = (prelimGrade + midtermGrade + finalGrade) / 3;

    cout << "The student's average grade is: " << fixed << setprecision(2) << average;

    return 0;
    
}