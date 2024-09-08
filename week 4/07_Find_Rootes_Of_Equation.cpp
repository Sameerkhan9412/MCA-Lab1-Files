#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {
    double a, b, c;
    
    // Input coefficients a, b, and c from the user
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    
    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;
    
    // Check the nature of the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and different." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        // Two equal real roots
        double root = -b / (2 * a);
        cout << "The roots are real and equal." << endl;
        cout << "Root: " << root << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex and different." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    
    return 0;
}
