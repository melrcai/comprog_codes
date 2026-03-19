#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int n;
    int product = 0; 

    cout << "\n";
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i <= 10; i++) {
       product = n * i; 
       cout << n << " x " << i << " = " << product << "\n";
    }
    return 0;
}