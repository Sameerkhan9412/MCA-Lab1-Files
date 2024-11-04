#include <iostream>
using namespace std;

// Function to swap two numbers using call by value
void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap_value: a = " << a << ", b = " << b << endl;
}

// Function to swap two numbers using call by reference
void swap_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap_reference: a = " << a << ", b = " << b << endl;
}

int main() {
    int x, y, choice;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Choose the swap method:" << endl;
    cout << "1. Call by Value" << endl;
    cout << "2. Call by Reference" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Before swapping (main): x = " << x << ", y = " << y << endl;

    switch (choice) {
        case 1:
            swap_value(x, y);
            cout << "After swap_value (main): x = " << x << ", y = " << y << endl;
            break;

        case 2:
            swap_reference(x, y);
            cout << "After swap_reference (main): x = " << x << ", y = " << y << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
