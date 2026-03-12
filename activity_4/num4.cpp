#include <iostream>
using std::cout;

int main() {
    int temperature;

    cout << "\n";
    cout << "Enter the temperature: ";
    std::cin >> temperature;

    if (temperature < 0) {
        cout << "ICE\n";
    } else if (temperature <= 100) {
        cout << "WATER\n";
    } else { 
        cout << "STEAM\n";
    }

    return 0;
}