#include <iostream>
#include <cmath> // For sqrt() function to calculate the hypotenuse
using namespace std;

class Triangle {
private:
    double base, height;

public:
    // Constructor to initialize base and height
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    // Function to calculate the length of the hypotenuse
    double hypo() {
        return sqrt(base * base + height * height);  // Pythagorean theorem
    }

    // Function to calculate the area of the triangle
    double area() {
        return 0.5 * base * height;  // Area formula for right triangle
    }
};

int main() {
    double base, height;

    // Taking input from the user
    cout << "Enter the base of the right triangle: ";
    cin >> base;
    cout << "Enter the height of the right triangle: ";
    cin >> height;

    // Creating an object of the Triangle class
    Triangle t(base, height);

    // Displaying the hypotenuse and area of the triangle
    cout << "Length of the hypotenuse: " << t.hypo() << endl;
    cout << "Area of the triangle: " << t.area() << endl;

    return 0;
}
