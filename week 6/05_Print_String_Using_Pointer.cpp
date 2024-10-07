#include <iostream>
using namespace std;

void printString(const char* str) {
    // Use a pointer to traverse the string
    while (*str != '\0') { // Check for the null terminator
        cout << *str;      // Print the character pointed to by str
        str++;             // Move to the next character
    }
    cout << endl;          // Print a newline after the string
}

int main() {
    const char* myString = "Hello, World!"; // Define a string

    cout << "The string is: ";
    printString(myString); // Call the function to print the string

    return 0;
}

