#include <iostream>
#include <iomanip>
using std::cout;
using std::fixed;
using std::setprecision;

int main() { // DOLLAR TO PESO
    
    double dollars = 4;
    double oneDollar = 50.75;
    double peso;
    
    peso = dollars * oneDollar;

    cout << "$4 is " << fixed << setprecision(2) << peso << " in peso";

    return 0;

}