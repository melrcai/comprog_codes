#include <iostream>
using std::cin;
using std::cout;

int main() {
    
    int num1, num2;
    int sum, product;

    cout << "Enter two numbers:\n";
    cout << "x = ";
    cin >> num1;
    cout << "y = ";
    cin >> num2;

    sum = num1 + num2;
    product = num1 * num2;

    cout << "\nSum: " << sum << "\nProduct: " << product << "\n";

    return 0;
    
}