#include <iostream>
#include <string>
#include <algorithm>  // For transform() and remove()

using namespace std;

// Function to check if the given string is a palindrome
bool isPalindrome(string str) {
    // Remove spaces from the string
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    // Convert the string to lowercase for case-insensitive comparison
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Compare the string with its reverse
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main() {
    string str;

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}
