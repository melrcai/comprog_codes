#include <iostream>
using std::cout;
using std::endl;

    void print_array(int arr[], int size) {
      for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
      }
    }

int main() {
    
    int numbers[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50}; 
    cout << "Array Elements: ";
    print_array(numbers, 10);

    cout << endl;
    return 0;
}