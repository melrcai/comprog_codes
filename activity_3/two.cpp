#include <iostream>
#include <cmath>
#include <iomanip> 
using std::cin; 
using std::cout;
using std::fixed;
using std::setprecision;

int main() { 
    
    double volume;
    double radius;
    const double PI = 3.14159;

    cout << "Volume of a Sphere Calculator:\n";
    cout << "Enter radius: ";
    cin >> radius; 

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "\nThe volume of a sphere is " << fixed << setprecision(2) << volume;

    return 0;
    
}