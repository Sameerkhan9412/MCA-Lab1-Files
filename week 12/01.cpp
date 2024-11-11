#include <iostream>
using namespace std;

class Simple {
    int a, b;

public:
    // Default constructor
    Simple() {
        a = 10;  // Initializing data members to 10
        b = 20;  // Initializing data members to 20
    }

    // Member function to display the values
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    // Creating an object of Simple class
    Simple obj;

    // Displaying the initialized values
    obj.display();

    return 0;
}
