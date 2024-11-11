#include <iostream>
#include <iomanip>
using namespace std;

void toBinary(int num) {
    if (num == 0) {
        cout << 0;
        return;
    }

    int binary[32]; // Array to store binary digits
    int index = 0;
    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
}

void toOctal(int num) {
    if (num == 0) {
        cout << "Octal: 0" << endl;
        return;
    }

    int octal[32]; // Array to store octal digits
    int index = 0;
    while (num > 0) {
        octal[index++] = num % 8;
        num /= 8;
    }

    cout << "Octal: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << octal[i];
    }
    cout << endl;
}

void toHexadecimal(int num) {
    if (num == 0) {
        cout << "Hexadecimal: 0" << endl;
        return;
    }

    char hexDigits[32]; // Array to store hexadecimal digits
    int index = 0;
    while (num > 0) {
        int remainder = num % 16;
        hexDigits[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        num /= 16;
    }

    cout << "Hexadecimal: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << hexDigits[i];
    }
    cout << endl;
}

int main() {
    int num, choice;

    cout << "Enter an integer number: ";
    cin >> num;

    cout << "\nSelect the conversion:\n";
    cout << "1. Convert to Binary\n";
    cout << "2. Convert to Octal\n";
    cout << "3. Convert to Hexadecimal\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            toBinary(num);
            break;
        case 2:
            toOctal(num);
            break;
        case 3:
            toHexadecimal(num);
            break;
        default:
            cout << "Invalid choice. Please select a valid option (1-3)." << endl;
            break;
    }

    return 0;
}
