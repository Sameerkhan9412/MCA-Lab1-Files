#include <iostream>
using namespace std;
// Write a C++ program to perform the addition of two numbers without using + operator.
int add(int a, int b) {
    while (b != 0) {
        // Calculate carry using bitwise AND and shift it left
        int carry = a & b;

        // Perform the addition without considering carry using bitwise XOR
        a = a ^ b;

        // Assign carry to b, shifting it left by 1
        b = carry << 1;
    }
    return a;
}

int main() {
    int num1, num2,sum;
    
    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Add the numbers using the add function
    sum = add(num1, num2);
    
    // Output the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;
    
    return 0;
}
