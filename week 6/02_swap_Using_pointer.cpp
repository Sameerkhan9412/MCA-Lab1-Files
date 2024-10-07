#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swap(int* a, int* b) {
    int temp; // Temporary variable for swapping
    temp = *a; // Store the value at address a
    *a = *b;   // Assign the value at address b to address a
    *b = temp; // Assign the temporary value to address b
}

int main() {
    int x, y;

    // Input two numbers from the user
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Display the values before swapping
    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Call the swap function
    swap(&x, &y);

    // Display the values after swapping
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}

