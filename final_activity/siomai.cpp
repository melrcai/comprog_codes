#include <iostream>
#include <string>
#include <cstdlib> 

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Orders {
public:
    void startOrdering() {
        string orders[6] = {"PORK SIOMAI", "BEEF SIOMAI", "SHRIMP SIOMAI", "COKE", "ROYAL", "SPRITE"};
        double prices[6] = {20.00, 25.00, 30.00, 20.00, 20.00, 20.00};
        int quantities[6] = {0}; 
        double currentOrderTotal;
        double totalBill = 0;
        char choice = 'y'; 
        double amount;

        while (choice == 'y' || choice == 'Y') {
            currentOrderTotal = 0;
            
            system("cls");
            cout << "SIOMAI NI MEL\n";
            cout << "WHAT'S YOUR ORDER MA'AM/SIR...\n\n";

            for (int i = 0; i < 6; i++) {
                cout << "ENTER THE NUMBER OF " << orders[i] << " ORDERED <" << prices[i] << "> : "; 
                cin >> quantities[i];
            }

            cout << "\nPress any key to continue...";
            cin.ignore(1000, '\n');
            cin.get();

            system("cls");
            cout << "***************************************************************\n";
            cout << "PARTICULARS\t\t\tQUANTITY\tAMOUNT\n";
            cout << "***************************************************************\n";
            
            for (int i = 0; i < 6; i++) {
                if (quantities[i] > 0) { 
                    amount = prices[i] * quantities[i];
                    currentOrderTotal += amount;
                    cout << orders[i] << "\t\t\t" << quantities[i] << "\t\t" << amount << endl;
                }
            }

            cout << "TOTAL:\t\t\t\t\t\t" << currentOrderTotal << endl;
            totalBill += currentOrderTotal;

            cout << "***************************************************************\n";
            cout << "THANKYOU. COME AGAIN." << endl << endl;
            
            cout << "Do you want to order again? (y/n): ";
            cin >> choice; 
        }
        
        system("cls");
        cout << "====================================================\n";
        cout << "GRAND TOTAL: " << totalBill << endl;
        cout << "Marcaida, Melissa D." << endl;
        cout << "====================================================\n";
    }
};

int main() {
    Orders shopSession;
    
    shopSession.startOrdering();

    return 0;
}