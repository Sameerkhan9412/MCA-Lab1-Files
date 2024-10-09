#include <iostream>
using namespace std;

class Box {
private:
    int length;  // Data member to store length

public:
    // Member function to set the length using 'this' pointer and return a reference
    Box& setLength(int len) {
        this->length = len;  // Using 'this' pointer to set the value of the current object
        return *this;        // Returning reference to the current object
    }

    // Member function to print the length
    void printLength() {
        cout << "Length: " << this->length << endl;  // Display the length using 'this' pointer
    }
};

int main() {
    Box b1;  // Create an object of class Box

    // Set length using setLength function and print it
    b1.setLength(15).printLength();  
    return 0;
}
