#include <iostream>
using std::cout;
using std::endl;

    void swap_reference(int &a, int &b) {
      int temp = a;
      a = b;
      b = temp;
    }

int main() {
    
    int x = 10;
    int y = 20;

    cout << "Before: x = " << x << ", y = " << y << "\n";
    
    swap_reference(x, y);
    cout << "Swap_value reference function: a = " << x << ", b = "<< y << "\n";

    cout << "After: x = " << x << ", y = " << y << endl;

    return 0;
}