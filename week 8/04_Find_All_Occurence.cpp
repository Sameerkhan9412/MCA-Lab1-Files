#include <iostream>
#include <string>
#include <sstream>  // For stringstream

using namespace std;

// Function to count occurrences of a word in a sentence
int countOccurrences(const string &sentence, const string &word) {
    int count = 0;
    string currentWord;

    // Use stringstream to break the sentence into words
    stringstream ss(sentence);
    
    // Loop through each word in the sentence
    while (ss >> currentWord) {
        if (currentWord == word) {
            count++;  // Increment the count if the word matches
        }
    }

    return count;
}

int main() {
    string sentence, word;

    // Input the sentence
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Input the word to count
    cout << "Enter the word to count: ";
    cin >> word;

    // Count occurrences of the word
    int occurrences = countOccurrences(sentence, word);

    // Output the result
    cout << "The word \"" << word << "\" occurs " << occurrences << " time(s) in the sentence." << endl;

    return 0;
}
