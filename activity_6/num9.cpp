#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int n;
    
    cout << "\n";
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "The number " << n << " is not a prime number.";
        return 0;
    }

    int isPrime = 1;

    for (int i = 2; i < n; i++) {
     if (n % i == 0) {
      isPrime = 0; 
      break;
     } 
    }

    if (isPrime == 1) {
      cout << "The number " << n << " is prime number.";
    } else {
      cout << "The number " << n << " is not a prime number.";
    } 

    return 0;
}