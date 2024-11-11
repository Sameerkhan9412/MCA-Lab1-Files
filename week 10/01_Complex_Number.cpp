#include <iostream>
using namespace std;

// Structure to represent a complex number
struct Complex {
    double real;
    double imag;
};

// Function to read a complex number
void readComplex(Complex &c) {
    cout << "Enter real part: ";
    cin >> c.real;
    cout << "Enter imaginary part: ";
    cin >> c.imag;
}

// Function to write a complex number
void writeComplex(const Complex &c) {
    cout << c.real << " + " << c.imag << "i" << endl;
}

// Function to add two complex numbers
Complex addComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    Complex c1, c2, result;

    cout << "Enter the first complex number:" << endl;
    readComplex(c1);

    cout << "Enter the second complex number:" << endl;
    readComplex(c2);

    cout << "\nFirst Complex Number: ";
    writeComplex(c1);

    cout << "Second Complex Number: ";
    writeComplex(c2);

    result = addComplex(c1, c2);
    cout << "\nAddition: ";
    writeComplex(result);

    result = subtractComplex(c1, c2);
    cout << "Subtraction: ";
    writeComplex(result);

    result = multiplyComplex(c1, c2);
    cout << "Multiplication: ";
    writeComplex(result);

    return 0;
}
