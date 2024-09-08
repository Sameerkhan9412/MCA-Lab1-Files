#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, nextTerm;

    cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";  // Print the current term

        // Calculate the next term
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    cout << endl;
}

int main() {
    int n;

    // Input the number of terms to display
    cout << "Enter the number of terms: ";
    cin >> n;

    // Generate Fibonacci sequence
    fibonacci(n);

    return 0;
}
