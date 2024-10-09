#include <iostream>
#include <string>
using namespace std;

class pntr_obj {
private:
    int roll_no;         // Data member for roll number
    string name;         // Data member for name

public:
    // Member function to set the values of data members
    void set_data(int roll, string n) {
        this->roll_no = roll;  // Using 'this' pointer to refer to the current object's roll_no
        this->name = n;        // Using 'this' pointer to refer to the current object's name
    }

    // Member function to print the object's data using 'this' pointer
    void print() {
        cout << "Object at memory address " << this << " invoked the print function." << endl;
        cout << "Roll Number: " << this->roll_no << ", Name: " << this->name << endl << endl;
    }
};

int main() {
    // Creating three objects of the pntr_obj class
    pntr_obj obj1, obj2, obj3;

    // Setting data for each object
    obj1.set_data(1, "Sameer");
    obj2.set_data(2, "Khan");
    obj3.set_data(3, "Malik");

    // Calling the print function for each object
    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}
