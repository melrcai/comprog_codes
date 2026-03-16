#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

int main() {
    
    double feet, inches;

    cout << "Feet to Inches Converter\n";
    cout << "Feet: ";
    cin >> feet;
    
    inches = feet * 12;

    cout << fixed << setprecision(2);
    cout << "\n" << feet << " ft is " << inches << " inches";

    return 0;
    
}