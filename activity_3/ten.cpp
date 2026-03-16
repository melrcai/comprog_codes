#include <iostream>
#include <iomanip>
using std::cout;
using std::fixed;
using std::setprecision;


int main() {
    
    double principal = 250000;
    double interestRate = 0.12;
    double time = 30.0 / 365.0;
    double taxRate = 0.10;
    double interest;
    double withholdingTax;
    double netInterest;

    interest = principal * interestRate * time;
    withholdingTax = interest * taxRate;
    netInterest = interest - withholdingTax;

    cout << fixed << setprecision(2);
    cout << "Bank Interest Computation for Mary\n";
    cout << "\nMary's interest: PHP " << interest << '\n';
    cout << "Mary's withholding tax: PHP " << withholdingTax << '\n';
    cout << "Mary's net interest: PHP "<< netInterest;

    return 0;

}