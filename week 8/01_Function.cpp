#include <iostream>
#include <string>

using namespace std;

// Function to insert a substring into a main string from a given position
string insertSubstring(string &mainStr, string &subStr, int position) {
    if (position < 0 || position > mainStr.length()) {
        cout << "Invalid position!" << endl;
        return mainStr;
    }
    // Insert the substring at the given position
    string newStr = mainStr;
    newStr.insert(position, subStr);
    return newStr;
}

// Function to delete n characters from a given position in a string
string deleteCharacters(string &mainStr, int position, int n) {
    if (position < 0 || position >= mainStr.length() || n < 0) {
        cout << "Invalid position or number of characters!" << endl;
        return mainStr;
    }
    // Delete n characters from the given position
    string newStr = mainStr;
    newStr.erase(position, n);
    return newStr;
}

int main() {
    string mainStr, subStr;
    int position, n;

    // Get main string from user
    cout << "Enter the main string: ";
    getline(cin, mainStr);

    // Operation 1: Insert substring
    cout << "Enter the substring to insert: ";
    getline(cin, subStr);
    cout << "Enter the position where you want to insert the substring: ";
    cin >> position;

    string resultStr = insertSubstring(mainStr, subStr, position);
    cout << "String after insertion: " << resultStr << endl;

    // Operation 2: Delete characters
    cout << "Enter the position to start deleting characters: ";
    cin >> position;
    cout << "Enter the number of characters to delete: ";
    cin >> n;

    resultStr = deleteCharacters(resultStr, position, n);
    cout << "String after deletion: " << resultStr << endl;

    return 0;
}
