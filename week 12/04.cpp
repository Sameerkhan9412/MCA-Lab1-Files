#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int objectCount;  // Static variable to keep track of object count

public:
    // Constructor: Increment the object count whenever an object is created
    ObjectCounter() {
        objectCount++;
        cout << "Object created. Total objects: " << objectCount << endl;
    }

    // Destructor: Decrement the object count whenever an object is destroyed
    ~ObjectCounter() {
        objectCount--;
        cout << "Object destroyed. Total objects remaining: " << objectCount << endl;
    }

    // Static function to get the current object count
    static int getObjectCount() {
        return objectCount;
    }
};

// Initialize the static variable objectCount
int ObjectCounter::objectCount = 0;

int main() {
    cout << "Entering main function.\n";

    {
        // Block 1
        cout << "Entering Block 1.\n";
        ObjectCounter obj1;  // Object created in Block 1
        ObjectCounter obj2;  // Another object created in Block 1
        cout << "Exiting Block 1.\n";
    }

    {
        // Block 2
        cout << "Entering Block 2.\n";
        ObjectCounter obj3;  // Object created in Block 2
        ObjectCounter obj4;  // Another object created in Block 2
        cout << "Exiting Block 2.\n";
    }

    cout << "Exiting main function.\n";

    return 0;
}
