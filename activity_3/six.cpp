#include <iostream>
using std::cin;
using std::cout;

int main() {
    
    int num1, num2;

    cout << "Enter two numbers to swap:\n";
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << '\n' << "After swapping: \n";
    cout << "First number: " << num1 << '\n';
    cout << "Second number: " << num2;
    
    return 0;

}