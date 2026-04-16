#include <iostream>
#include <string>
#include <iomanip>
using std::cout;
using std::cin;
using std::setw;
using std::string;


int main() {
    
    const char *status[] = {"SINGLE", "MARRIED", "ANNULLED", "SEPARATED", "WIDOW"};
    int choice = 0;
    string fullName;
    char repeat;
    bool found = 0;

    do {
      found = 0;
      cout << "\nCIVIL STATUS CHECKER\n\n"; 
      cout << "ENTER YOUR NAME: ";
      getline(cin, fullName);
      cout << "SELECT YOUR CIVIL STATUS: \n";
      cout << "1 - SINGLE, 2 - MARRIED, 3 - ANNULLED, 4 - SEPARATED, 5 - WIDOW: ";
      cin >> choice;

      for (int i = 0; i < 5; i++) {
        if (choice == (i + 1)) {
          cout << "\nHI, " << fullName << " YOU ARE " << status[i] << ".\n";
          found = 1;
          break;
        } 
      }

      if (!found) { //if after the loop, found is still false
        cout << "\nINVALID CHOICE. PLS ENTER (1 - 5)\n";
      }

      cout << "\nDO YOU WANT TO CONTINUE? (TYPE Y OR N): ";
      cin >> repeat;

      cin.ignore(1000, '\n'); 

    } while (repeat == 'Y' || repeat == 'y');

    cout << "\n\t\tTHANK YOU FOR USING THIS PROGRAM";

    return 0;
}