#include <iostream>
#include <string>

using namespace std;

// Function to replace all occurrences of a substring in a sentence
string replaceSubstring(const string &sentence, const string &toReplace, const string &replaceWith) {
    string result = sentence;
    size_t pos = result.find(toReplace);  // Find the first occurrence of the substring

    // Loop to find and replace all occurrences of 'toReplace' with 'replaceWith'
    while (pos != string::npos) {
        result.replace(pos, toReplace.length(), replaceWith);  // Replace the found substring
        pos = result.find(toReplace, pos + replaceWith.length());  // Find the next occurrence
    }

    return result;
}

int main() {
    string sentence, toReplace, replaceWith;

    // Input the sentence
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Input the string to find and the replacement string
    cout << "Enter the string to be replaced: ";
    getline(cin, toReplace);
    
    cout << "Enter the replacement string: ";
    getline(cin, replaceWith);

    // Perform the replacement
    string updatedSentence = replaceSubstring(sentence, toReplace, replaceWith);
    
    // Output the updated sentence
    cout << "Updated sentence: " << updatedSentence << endl;

    return 0;
}
