#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int n, i;
    int sum = 0; 
    int even = 0;
    int odd = 0;

    cout << "\n";
    cout << "Enter a number: ";
    cin >> n;
    cout << "Set of numbers: ";

    for (i = 1; i <= n; i++) {
       cout << i << " ";
       sum += i;
       if (i % 2 == 0) {
        even += i;
       } else {
        odd += i;
       }
    }
    cout << "\n";

    cout << "Sum: " << sum << "\n";
    cout << "Sum of even numbers: " << even << "\n";
    cout << "Sum of odd numbers: " << odd;
    return 0;
}