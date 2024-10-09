#include <iostream>
using namespace std;

// Function to count vowels in a given string using pointers
int countVowels(char *str) {
    int count = 0;
    while (*str != '\0') {
        // Check if the character is a vowel (uppercase or lowercase)
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++; // Move the pointer to the next character
    }
    return count;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int vowelCount = countVowels(str);
    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}
