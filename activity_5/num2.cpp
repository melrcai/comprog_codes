#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int monthlySales;
    int income;

    cout << "\n";
    cout << "Prepared by: Marcaida, Melissa D.\n";
    
    cout << "Enter your monthly sales: ";
    cin >> monthlySales;

    if (monthlySales >= 50000) {
     income = 375 + (0.16 * monthlySales);
    } else if (monthlySales >= 40000) {
     income = 350 + (0.14 * monthlySales);
    } else if (monthlySales >= 30000) {
     income = 325 + (0.12 * monthlySales); 
    } else if (monthlySales >= 20000) {
     income = 300 + (0.09 * monthlySales); 
    } else if (monthlySales >= 10000) {
     income = 250 + (0.05 * monthlySales); 
    } else if (monthlySales < 10000) {
     income = 200 + (0.03 * monthlySales); 
    } else {
      cout << "Sales below commission range";
    }

    cout << "Income for monthly sales " << monthlySales << " is " << income;

    return 0;
}