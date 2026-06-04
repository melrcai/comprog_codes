#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Orders {
};

    int main() {

    string orders[6] = {"PORK SIOMAI", "BEEF SIOMAI", "SHRIMP SIOMAI", "COKE", "ROYAL", "SPRITE"};
    double prices[6] = {20.00, 25.00, 30.00, 20.00, 20.00, 20.00};
    int quantities[6] = {0}; 
    double totalBill = 0;
    
    cout << "SIOMAI NI MEL";
    cout << "WHAT'S YOUR ORDER MA'AM/SIR...";

    for (int i = 0; i < 6; i++) {
      cout << "ENTER THE NUMBER OF" << orders[i] <<  "ORDERED" << "<" << prices[i] << ">" << endl;
      cin >> quantities[i];
    }
    

    return 0;
}

// nah, i feel so sleepy and damn tired.
// will continue this tmr. afghsejfahfwja 