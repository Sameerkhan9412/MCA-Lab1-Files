#include <iostream>
using namespace std;

// Function to calculate the length of a string using a pointer
int stringLength(char *str) {
    int length = 0;
    // Traverse the string until the null character ('\0') is encountered
    while (*str != '\0') {
        length++; // Increment the length counter
        str++;    // Move the pointer to the next character
    }
    return length;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Call the stringLength function and display the result
    int length = stringLength(str);
    cout << "Length of the string: " << length << endl;

    return 0;
}
