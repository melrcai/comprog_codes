#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int n, i;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
      cout << i << " ";
    }
    cout << "\n";
    
    for (i = n; i >= 1; i--) {
      cout << i << " " ;
    }
    return 0;
}