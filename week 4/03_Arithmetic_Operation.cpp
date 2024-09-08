#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double a, b, c, d, e, f, g;
    
    // Input values from the user
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    cout << "Enter the value of d: ";
    cin >> d;
    cout << "Enter the value of e: ";
    cin >> e;
    cout << "Enter the value of f: ";
    cin >> f;
    cout << "Enter the value of g: ";
    cin >> g;
    
    // Evaluate the expression
    double result = ((a + b / c * d - e) * (f - g));
    
    // Output the result
    cout << "The result of the expression is: " << result << endl;
    
    return 0;
}