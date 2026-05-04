#include <iostream>
using std::cout;
using std::endl;

    void swap_value(int a, int b){
      int temp = a;
      a = b;
      b = temp;
      cout << "swap_value function: a = " << a << ", b = "<< b << endl;
    }

int main() {
    
    int x = 10;
    int y = 20;
    cout << "Before: x = " << x << ", y = " << y << endl;

    swap_value(x, y);

    cout << "After: x = " << x << ", y = " << y << endl;

    return 0;
}