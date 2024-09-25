#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << "Numbers Here ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int positiveCount = 0, negativeCount = 0;
    int oddCount = 0, evenCount = 0;

    // Count positive, negative, odd, and even numbers
    for (int i=0;i<n;i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i]< 0) {
            negativeCount++;
        }

        if (arr[i]% 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display the results
    cout << "Positive numbers: " << positiveCount << std::endl;
    cout << "Negative numbers: " << negativeCount << std::endl;
    cout << "Even numbers: " << evenCount << std::endl;
    cout << "Odd numbers: " << oddCount << std::endl;

    return 0;
}

