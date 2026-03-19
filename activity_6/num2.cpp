#include <iostream>
using std::cout;

int main() {
    
    int sum = 0;

    cout << "\n";
    for (int i = 1; i <= 10; i++) {
      sum += i;
    }

    cout << "Sum: " << sum;
    return 0;
}