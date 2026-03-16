#include <iostream>
#include <iomanip>
using std::cout;
using std::fixed;
using std::setprecision;

int main() {
    
    double prelimGrade = 85;
    double midtermGrade = 93;
    double finalGrade = 87;
    double average;

    average = (prelimGrade + midtermGrade + finalGrade) / 3;

    cout << "The student's average grade is: " << fixed << setprecision(2) << average;


    return 0;
    
}