#include <iostream>
using namespace std;

// Function for addition
double add(double a, double b) {
    return a + b;
}

// Function for subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function for multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function for division with error handling for division by zero
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0; // returning 0 to avoid undefined result
    }
    return a / b;
}

int main() {
    double num1, num2, result;
    int choice;

    // Input values
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Display menu
    cout << "\nSelect an operation to perform:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Using switch case to call the appropriate function
    switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "\nResult of addition: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "\nResult of subtraction: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "\nResult of multiplication: " << result << endl;
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0) {
                cout << "\nResult of division: " << result << endl;
            }
            break;
        default:
            cout << "\nInvalid choice. Please select a valid operation (1-4)." << endl;
            break;
    }

    return 0;
}
