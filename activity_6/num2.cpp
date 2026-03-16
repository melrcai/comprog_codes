#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
      sum += i;
    }

    cout << "Sum: " << sum;
    return 0;
}