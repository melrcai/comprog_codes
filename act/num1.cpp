#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

    int firstnum, secnum, thirdnum, fourthnum;
    int average;

    cout << " " << endl;

    cout << "Prepared by: Melissa D. Marcaida\n";
    cout << "Sample Output\n";

    cout << "first number:  ";
    cin >> firstnum;
    cout << "second number: ";
    cin >> secnum;
    cout << "third number:  ";
    cin >> thirdnum;
    cout << "fourth number: ";
    cin >> fourthnum;

    average = (firstnum + secnum + thirdnum + fourthnum) / 4;
    cout << "Average:       " << average;


    return 0;
}