#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int n;
    int factorial = 1;

    cout << "\n";
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
      cout << "factorial cannot be negative number";
    } else {
      for (int i = n; i >= 1; i--) {
        factorial *= i; 
      }

    cout << "The factorial of " << n << " is " << factorial;
    }

    return 0;
}