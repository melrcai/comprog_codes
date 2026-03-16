#include <iostream>
#include <iomanip>
using std::cout;
using std::fixed;
using std::setprecision;

int main() {

    double grossPay = 0;
    int hours = 40;
    double rate = 215.75;

    grossPay = hours * rate;

    cout <<"Gross pay of Juan Dela Cruz is PHP " << fixed << setprecision(2) << grossPay;
    
    return 0;

}