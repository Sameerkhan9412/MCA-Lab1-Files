#include <iostream>
#include <string>

using namespace std;

// Function to find the position of string T in string S
int findSubstring(const string &S, const string &T) {
    size_t position = S.find(T);  // Find the position of string T in string S

    if (position != string::npos) {
        // Return the position as 1-based index
        return position + 1;
    } else {
        // Return 1 if T is not found in S
        return 1;
    }
}

int main() {
    string S, T;

    // Input string S
    cout << "Enter string S: ";
    getline(cin, S);

    // Input string T
    cout << "Enter string T: ";
    getline(cin, T);

    // Find the position of T in S
    int position = findSubstring(S, T);

    // Output the result
    if (position == 1 && S.find(T) == string::npos) {
        cout << "String T is not found in string S." << endl;
    } else {
        cout << "String T starts at position " << position << " in string S." << endl;
    }

    return 0;
}
