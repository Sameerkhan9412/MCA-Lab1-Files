#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    // Check divisibility by numbers from 5 to sqrt(num)
    for (int i = 5; i <= sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void generatePrimes(int n) {
    cout << "Prime numbers between 1 and " << n << " are: ";
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;

    // Input the upper limit from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Generate and print all prime numbers between 1 and n
    generatePrimes(n);

    return 0;
}
