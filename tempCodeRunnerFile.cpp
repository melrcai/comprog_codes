#include <iostream>
using std::cout;
using std::cin;

int main() {
    
    int num;
    cout << "Enter a number to know the temperature: ";
    cin >> num;

    if (num < 0) {
      cout << "ICE";
    } else if (num < 100) {
      cout << "WATER";
    } else {
      cout << "STEAM";
    }
    return 0;
}