#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

int main() {
    
    double length, width;
    double area, perimeter;

    cout << "Rectangle Area and Perimeter Calculation:\n";
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;


    area = length * width;
    perimeter = 2 * (length + width);

    cout << "\nThe area of a rectangle: " << fixed << setprecision(2) << area 
    << "\nThe perimeter of a rectangle: " << fixed << setprecision(2) << perimeter;

    return 0;

}