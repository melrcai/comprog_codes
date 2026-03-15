#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::setprecision;
using std::fixed;

int main() {
    
    double price = 5.50;
    double bagsOrdered, totalCost, discount, totalCharge;

    cout << "\n";
    cout << "Prepared by: Marcaida, Melissa D.\n";

    cout << "Number of bags ordered: ";
    cin >> bagsOrdered;


    totalCost = (price * bagsOrdered);
    
    if (bagsOrdered <= 25) {
     discount = totalCost * 0.05;
    } else if (bagsOrdered <= 50) {
     discount = totalCost * 0.06;
    } else if (bagsOrdered <= 100) {
     discount = totalCost * 0.07;
    } else if (bagsOrdered <= 150) {
     discount = totalCost * 0.08;
    } else if (bagsOrdered <= 200) {
     discount = totalCost * 0.09;
    } else if (bagsOrdered > 200) {
     discount = totalCost * 0.10;
    } else {
      cout << "Invalid Input";
    }


    totalCharge = totalCost - discount;
    cout << "Total cost: $" << totalCost << fixed << setprecision(2) << '\n';
    cout << "Discount: $" << discount << fixed << setprecision(2) << '\n';
    cout << "Total Charge: $" << totalCharge << fixed << setprecision(2) << '\n';
    return 0;
}