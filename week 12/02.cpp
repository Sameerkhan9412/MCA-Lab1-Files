#include <iostream>
using namespace std;

class Calculator {
    // Data members
    double num1, num2, num3, num4;

public:
    // Default constructor
    Calculator() {
        num1 = 0;
        num2 = 0;
        num3 = 0;
        num4 = 0;
    }

    // Parameterized constructor
    Calculator(double n1, double n2, double n3, double n4) {
        num1 = n1;
        num2 = n2;
        num3 = n3;
        num4 = n4;
    }

    // Function to perform addition
    double add() {
        return num1 + num2 + num3 + num4;
    }

    // Function to perform subtraction
    double subtract() {
        return num1 - num2 - num3 - num4;
    }

    // Function to perform multiplication
    double multiply() {
        return num1 * num2 * num3 * num4;
    }

    // Function to perform division (with error checking)
    double divide() {
        if (num2 == 0 || num3 == 0 || num4 == 0) {
            cout << "Error: Division by zero is not allowed!" << endl;
            return 0;
        }
        return num1 / num2 / num3 / num4;
    }

    // Function to display the values of the data members
    void display() {
        cout << "Values: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;
    }
};

int main() {
    // Creating object using parameterized constructor
    Calculator calc(10.5, 5.5, 2.5, 1.5);

    // Displaying the initial values
    calc.display();

    // Performing arithmetic operations
    cout << "Addition of values: " << calc.add() << endl;
    cout << "Subtraction of values: " << calc.subtract() << endl;
    cout << "Multiplication of values: " << calc.multiply() << endl;
    cout << "Division of values: " << calc.divide() << endl;

    return 0;
}
