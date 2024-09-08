#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;

    // Input a 3-digit number from the user
    cout << "Enter a 3-digit number: ";
    cin >> num;

    // Store the original number to compare later
    originalNum = num;

    // Calculate the sum of the cubes of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;            // Extract the last digit
        result += pow(remainder, 3);             // Add the cube of the digit to result
        originalNum /= 10;                       // Remove the last digit
    }

    // Check if the original number is equal to the result
    if (result == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
