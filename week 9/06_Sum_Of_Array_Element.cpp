#include <iostream>
using namespace std;

// Recursive function to find the sum of array elements
int sumArray(int arr[], int size, int index) {
    // Base case: if index reaches size, return 0
    if (index >= size) {
        return 0;
    }
    // Return the current element plus the sum of the rest of the array
    return arr[index] + sumArray(arr, size, index + 1);
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

    int sum = sumArray(arr, size, 0); // Start recursion from index 0
    cout << "Sum of array elements is: " << sum << endl;

    return 0;
}
