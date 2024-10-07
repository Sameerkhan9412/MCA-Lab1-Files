#include <iostream>
using namespace std;
int main() {
    const int size = 5; 
    int arr[size];      
    int* ptr = arr; 

    // Reading elements into the array using the pointer
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> *(ptr + i); 
    }

    // Displaying the values using the array
    cout << "\nThe elements you entered are:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << (i + 1) << ": " << arr[i] << endl; 
    }

    return 0;
}

