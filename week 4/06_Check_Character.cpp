#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Using if-else to determine the type of character
    if (ch >= 65 && ch <= 90) {
        cout << ch << " is a capital letter." << endl;
    } else if (ch >= 97 && ch <= 122) {
        cout << ch << " is a small case letter." << endl;
    } else if (ch >= 48 && ch <= 57) {
        cout << ch << " is a digit." << endl;
    } else {
        cout << ch << " is a special symbol." << endl;
    }

    // Using switch to determine the type of character
    cout << "Using switch case:" << endl;
    switch (ch) {
        // Capital letters (A-Z)
        case 65 ... 90:
            cout << ch << " is a capital letter." << endl;
            break;
        
        // Lowercase letters (a-z)
        case 97 ... 122:
            cout << ch << " is a small case letter." << endl;
            break;

        // Digits (0-9)
        case 48 ... 57:
            cout << ch << " is a digit." << endl;
            break;

        // Special symbols
        default:
            cout << ch << " is a special symbol." << endl;
            break;
    }

    return 0;
}
