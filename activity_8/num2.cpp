#include <iostream>
using std::cout;
using std::endl;

int main() {

    int num[] = {5, 10, 15, 20, 25, 30, 35, 40};
    
    cout << "\n"; 
    for (int i = 0; i < 8; i++) {
      cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}