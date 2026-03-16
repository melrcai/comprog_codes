#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int n;
    int sum = 0; 

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i <= 10; i++) {
       sum = n * i; 
       cout << n << " x " << i << " = " << sum << "\n";
    }
    return 0;
}