#include <iostream>
using namespace std;

// Recursive function to find the maximum element
int findMax(int arr[], int size) {
    // Base case: if there's only one element, return it
    if (size == 1) {
        return arr[0];
    }
    // Recursive case: find the maximum in the rest of the array
    int maxRest = findMax(arr + 1, size - 1);
    // Return the maximum between the first element and the maximum of the rest
    return (arr[0] > maxRest) ? arr[0] : maxRest;
}

// Recursive function to find the minimum element
int findMin(int arr[], int size) {
    // Base case: if there's only one element, return it
    if (size == 1) {
        return arr[0];
    }
    // Recursive case: find the minimum in the rest of the array
    int minRest = findMin(arr + 1, size - 1);
    // Return the minimum between the first element and the minimum of the rest
    return (arr[0] < minRest) ? arr[0] : minRest;
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

    int maxElement = findMax(arr, size); // Find maximum element
    int minElement = findMin(arr, size); // Find minimum element

    cout << "Maximum element in the array is: " << maxElement << endl;
    cout << "Minimum element in the array is: " << minElement << endl;

    return 0;
}
