#include <iostream>
using namespace std;

class Number {
private:
    int num1, num2;  // Data members to store the two numbers

public:
    // Member function to set the values of the two numbers
    void set_data(int a, int b) {
        this->num1 = a;  // Using 'this' pointer to set the first number
        this->num2 = b;  // Using 'this' pointer to set the second number
    }

    // Member function to find and return the greater number using 'this' pointer
    int findGreater() {
        if (this->num1 > this->num2) {
            return this->num1;  // Return the first number if it's greater
        } else {
            return this->num2;  // Return the second number if it's greater
        }
    }

    // Member function to print the numbers
    void print() {
        cout << "Number 1: " << this->num1 << ", Number 2: " << this->num2 << endl;
    }
};

int main() {
    Number n;  // Create an object of class Number

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    n.set_data(a, b);   // Set the numbers using set_data function
    n.print();          // Print the numbers

    int greater = n.findGreater();  // Find the greater number using findGreater function
    cout << "The greater number is: " << greater << endl;

    return 0;
}
