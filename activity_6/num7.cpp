#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int n, i;

    cout << "\n";
    cout << "Enter a number: ";
    cin >> n; cout << "\n";

    cout << "Original: ";
    for (i = 1; i <= n; i++) {
      cout << i << " ";
    }
    cout << "\n";
    
    cout << "Reversed: ";
    for (i = n; i >= 1; i--) {
      cout << i << " " ;
    }
    return 0;
}