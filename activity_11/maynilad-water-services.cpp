#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;
using std::getline;
using std::ws;

void calculateBill(int type, double present, double previous) {
    const double RATE_RESIDENTIAL = 17.75;
    const double RATE_COMMERCIAL = 24.75;
    const double ENVIRONMENTAL_PCT = 0.20; 
    const double VAT_PCT = 0.12;            

    double consumption = present - previous;
    
    double charge_rate = RATE_COMMERCIAL;
    if (type == 1) {
        charge_rate = RATE_RESIDENTIAL;
    }
    
    double basic_charge = consumption * charge_rate;
    double environmental_charge = basic_charge * ENVIRONMENTAL_PCT;
    double vat = basic_charge * VAT_PCT;
    double total_amount_due = basic_charge + environmental_charge + vat;

    cout << "\n---------------------------------------------------------" << endl;
    cout << "CONSUMPTION (cu. m.)           : " << consumption << endl;
    cout << "BASIC CHARGE                   : Php " << basic_charge << endl;
    cout << "ENVIRONMENTAL CHARGES (20%)    : Php " << environmental_charge << endl;
    cout << "VAT (12%)                      : Php " << vat << endl;
    cout << "TOTAL AMOUNT DUE               : Php " << total_amount_due << endl;
    cout << "---------------------------------------------------------" << endl;
}

int main() {
    int total_transactions = 0;
    char process_another;

    cout << fixed << setprecision(2);

    do {
        string account_number;
        string account_name;
        int account_type;
        double present_reading;
        double previous_reading;

        cout << "\n=========================================================" << endl;
        cout << "                MAYNILAD WATER SERVICES INC.               " << endl;
        cout << "=========================================================" << endl;

        cout << "ACCOUNT NUMBER                 : ";
        getline(cin >> ws, account_number); 
        
        cout << "ACCOUNT NAME                   : ";
        getline(cin, account_name);

        cout << "ACCOUNT TYPE (1-RESIDENTIAL, 2-COMMERCIAL): ";
        cin >> account_type;

        cout << "PRESENT METER READING          : ";
        cin >> present_reading;

        cout << "PREVIOUS METER READING         : ";
        cin >> previous_reading;

        calculateBill(account_type, present_reading, previous_reading);

        total_transactions++; 

        cout << "PROCESS ANOTHER? (Y/N)         : ";
        cin >> process_another;

    } while (process_another == 'Y' || process_another == 'y');

    cout << "\n=========================================================" << endl;
    cout << "TOTAL NO. OF TRANSACTION       : " << total_transactions << endl;
    cout << "PREPARED BY                    : Melissa D. Marcaida" << endl;
    cout << "=========================================================" << endl;

    return 0;
}
