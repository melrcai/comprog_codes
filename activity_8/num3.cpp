#include <iostream>
using std::cout;

int main() {
    
    int num[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int sum = 0;
    
    cout << "\n"; 
    cout << "Numbers: ";
    for (int i = 0; i < 10; i++) {
      cout << num[i] << " ";
      sum += num[i];
    }
    cout << "\nSum: " << sum;
    return 0;
}