#include <iostream>
#include <cmath>
#include <iomanip>
using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;
using std::endl;

int main() {

    const double PI = 3.1416;
    double radius, area;

    cout << " " << endl;
    
    cout << "Prepared by: Melissa D. Marcaida\n\n";
    cout << "Computation for area of a circle\n";
    cout << "Enter radius: ";
    cin >> radius; 

    area = PI * pow(radius, 2);
    
    cout << "The area of a circle is " << fixed << setprecision(2) << area;
    return 0;
}