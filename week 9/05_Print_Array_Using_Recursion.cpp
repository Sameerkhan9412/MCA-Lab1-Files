#include <iostream>
using namespace std;

// Recursive function to display array elements
void displayArray(int arr[], int size, int index) {
    // Base case: if index reaches size, stop recursion
    if (index >= size) {
        return;
    }
    // Print the current element
    cout << arr[index] << " ";
    // Recursive call for the next index
    displayArray(arr, size, index + 1);
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size]; // Declare the array

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    displayArray(arr, size, 0); // Start recursion from index 0
    cout << endl;

    return 0;
}
