#include <iostream>
#include <cstring>
using namespace std;
void reverseString(char* str) {
    // Get the length of the string
    int length = strlen(str);
    
    // Create pointers to the start and end of the string
    char* start = str;
    char* end = str + length - 1;
    
    // Swap characters until the pointers meet in the middle
    while (start < end) {
        // Swap the characters
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the middle
        start++;
        end--;
    }
}

int main() {
    // Input string
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Reverse the string
    reverseString(str);
    
    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}

