#include <iostream>
using namespace std;

int gcdRecursive(int a, int b) {
    if (b == 0)  // base case
        return a;
    else
        return gcdRecursive(b, a % b);  // recursive call
}
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD (Recursive) of " << num1 << " and " << num2 << " is: " << gcdRecursive(num1, num2) << endl;
    cout << "GCD (Iterative) of " << num1 << " and " << num2 << " is: " << gcdRecursive(num1, num2) << endl;
    return 0;
}
