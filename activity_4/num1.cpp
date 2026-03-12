#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;

int main() {
  
  int num;

  cout << "\n";
  cout << "Enter a number: ";
  cin >> num;
  
  if (num >= 0){
    cout << "The number " << num << " is POSITIVE\n";
  } else {
    cout << "The number " << num << " is NEGATIVE\n";
  }

  return 0;
}