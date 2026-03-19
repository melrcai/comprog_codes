#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

int power (int x, int y) {
    return pow(x, y);
}

int main() {
    
    int num1;
    int num2;
    cout << "\n"; 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << num1 << " to the " << num2 << " is " << power(num1, num2);

    return 0;
}