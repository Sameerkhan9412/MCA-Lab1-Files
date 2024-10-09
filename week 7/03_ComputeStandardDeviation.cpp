#include <iostream>
#include <cmath>  // For sqrt function
using namespace std;

// Function to compute the sum of array elements using pointers
double computeSum(double *arr, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);  // Using pointer arithmetic to access elements
    }
    return sum;
}

// Function to compute the mean of array elements
double computeMean(double sum, int n) {
    return sum / n;
}

// Function to compute the standard deviation of array elements
double computeStdDev(double *arr, int n, double mean) {
    double variance = 0.0;
    for (int i = 0; i < n; i++) {
        variance += pow(*(arr + i) - mean, 2);  // (Xi - mean)^2
    }
    variance /= n;  // Calculate variance
    return sqrt(variance);  // Return standard deviation
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    double arr[n];

    cout << "Enter " << n << " real numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);  // Reading elements into array using pointer
    }

    // Compute the sum
    double sum = computeSum(arr, n);
    cout << "Sum of elements: " << sum << endl;

    // Compute the mean
    double mean = computeMean(sum, n);
    cout << "Mean of elements: " << mean << endl;

    // Compute the standard deviation
    double stdDev = computeStdDev(arr, n, mean);
    cout << "Standard Deviation: " << stdDev << endl;

    return 0;
}
