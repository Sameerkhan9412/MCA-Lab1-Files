#include <iostream>
using namespace std;

int main() {
    int n, target, frequency = 0;

    // Input size of the list
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    int arr[n];

    // Input elements of the list
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i <n; i++) {
        cin >> arr[i];
    }

    // Input the target number to find its frequency
    cout << "Enter the number to find its frequency: ";
    cin >> target;

    // Count the frequency of the target number
    for (int i=0;i<n;i++) {
        if (arr[i] == target) {
            frequency++;
        }
    }

    // Display the result
    cout << "The frequency of " << target << " in the list is: " << frequency << endl;

    return 0;
}

