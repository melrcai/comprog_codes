#include <iostream>
using std::cout;
using std::cin;

int main() {
    int productID;
    double price;

    cout << "\n";
    cout << "Enter Product ID: ";
    cin >> productID;

    switch (productID) {
        case 1:
            price = 50.55;
            break;
        case 2:
        case 9:
            price = 12.35;
            break;
        case 5:
        case 7:
        case 11:
            price = 11.46;
            break;
        default:
            cout << "Invalid Product ID!\n";
            return 0; 
    }

    cout << "The price of product " << productID << " is P" << price << "\n";

    return 0;
}