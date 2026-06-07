#include <iostream>
#include <string>
#include <cstdlib> // cls
#include <iomanip> // setw

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::setw;
using std::left;
using std::right;
using std::setprecision;
using std::fixed;

class Orders {
public:
    // ! method 
    void startOrdering() {
        string orders[6] = {"PORK SIOMAI", "BEEF SIOMAI", "SHRIMP SIOMAI", "COKE", "ROYAL", "SPRITE"};
        double prices[6] = {20.00, 25.00, 30.00, 20.00, 20.00, 20.00};
        int quantities[6] = {0}; 
        double currentOrderTotal;
        double totalBill = 0;
        char choice = 'y'; 
        double amount;

        int consoleWidth = 60;

        while (choice == 'y' || choice == 'Y') {
            currentOrderTotal = 0;
            
            system("cls");
            cout << string(consoleWidth, '*') << endl;
            cout << setw(44) << "===== SIOMAI NI MEL LMNOP =====" << endl;
            cout << setw(44) << "WHAT'S YOUR ORDER MA'AM/SIR..." << endl;
            cout << string(consoleWidth, '*') << endl;

            for (int i = 0; i < 6; i++) {
                cout << setw(23) << "ENTER THE NUMBER OF " << orders[i] << fixed << setprecision(2) << " ORDERED <" << prices[i] << "> : "; 
                cin >> quantities[i];
            }

            cout << string(consoleWidth, '*') << endl;
            cout << "\nPress any key to continue...";
            cin.ignore(1000, '\n');
            cin.get();

            system("cls");
            cout << string(consoleWidth, '*') << endl;
            cout << setw(44) << "===== SIOMAI NI MEL LMNOP =====" << endl;
            cout << string(consoleWidth, '*') << endl; // ? why is thsi string?
            cout << left << setw(25) << "PARTICULARS" 
                 << right << setw(15) << "QUANTITY" 
                 << setw(15) << "AMOUNT" << endl;
            cout << string(consoleWidth, '-') << endl;
            
            for (int i = 0; i < 6; i++) {
                if (quantities[i] > 0) { 
                    amount = prices[i] * quantities[i];
                    currentOrderTotal += amount;
                    cout << left << setw(25) << orders[i] 
                        << left << setw(6) << "" << right << setw(6) << quantities[i] << setw(3) << ""
                         << setw(15) << amount << endl;
                }
            }

            cout << string(consoleWidth, '-') << endl;
            cout << left << setw(40) << "TOTAL:" << right << setw(15) << currentOrderTotal << endl;
            totalBill += currentOrderTotal;

            cout << string(consoleWidth, '*') << endl;
            cout << setw(38) << "THANKYOU. COME AGAIN." << endl << endl;
            
            cout << "Do you want to order again? (y/n): ";
            cin >> choice; 
        }
        
        system("cls");
        cout << string(consoleWidth, '=') << endl;
        cout << setw(31) << "RECEIPT" << endl;
        cout << string(consoleWidth, '=') << endl;
        cout << setw(31) << "GRAND TOTAL: " << totalBill << fixed << setprecision(2) << endl;
        cout << setw(38) << "Marcaida, Melissa D." << endl;
        cout << string(consoleWidth, '=') << endl;
    }
};

int main() {

    // ! instance / object
    Orders toOrder;
    
    // ! call method
    toOrder.startOrdering();

    return 0;
}