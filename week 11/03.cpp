#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num, choice;

    // Input validation: ensuring a 4-digit number
    do {
        cout << "Enter a 4-digit integer: ";
        cin >> num;
        if (num < 1000 || num > 9999) {
            cout << "Please enter a valid 4-digit integer.\n";
        }
    } while (num < 1000 || num > 9999);

    cout << "\nSelect an operation:\n";
    cout << "1. Reverse of the number\n";
    cout << "2. Sum of the number with its reverse\n";
    cout << "3. Sum of alternative digits (1st+3rd and 2nd+4th)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    int reversedNum = reverseNumber(num);
    int digit1 = num / 1000;
    int digit2 = (num / 100) % 10;
    int digit3 = (num / 10) % 10;
    int digit4 = num % 10;

    switch (choice) {
        case 1:
            cout << "\nReverse of the number: " << reversedNum << endl;
            break;
        case 2:
            cout << "\nSum of the number with its reverse: " << (num + reversedNum) << endl;
            break;
        case 3:
            cout << "\nSum of alternative digits (1st + 3rd and 2nd + 4th): "
                 << (digit1 + digit3) << " and " << (digit2 + digit4) << endl;
            break;
        default:
            cout << "\nInvalid choice. Please select a valid operation (1-3)." << endl;
            break;
    }

    return 0;
}
