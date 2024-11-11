#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nSelect operation to perform:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "\nResult of addition: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "\nResult of subtraction: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "\nResult of multiplication: " << result << endl;
            break;
        case 4:
            if (num2 != 0) { // Checking if the divisor is not zero
                result = num1 / num2;
                cout << "\nResult of division: " << result << endl;
            } else {
                cout << "\nError: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "\nInvalid choice. Please select a valid operation (1-4)." << endl;
            break;
    }

    return 0;
}
