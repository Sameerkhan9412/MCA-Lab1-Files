#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n <= 1)  // base case
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

int factorialIterative(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial (Recursive) of " << num << " is: " << factorialRecursive(num) << endl;
    cout << "Factorial (Iterative) of " << num << " is: " << factorialIterative(num) << endl;
    return 0;
}
