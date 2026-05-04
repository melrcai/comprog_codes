#include <iostream>
using std::cout;
using std::endl;

    int add(int a, int b) {
        return a + b;
    }

int main() {
    int num1 = 15; int num2 = 27;

    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    
    return 0;
}