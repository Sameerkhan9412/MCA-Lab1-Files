#include <iostream>
#include <string>
using namespace std;

// Structure to represent date of birth
struct DOB {
    int day;
    int month;
    int year;
};

// Structure to represent a person, including their name and date of birth
struct Person {
    string name;
    DOB dob;  // Nested structure for date of birth
};

// Function to display person's name and date of birth
void displayPersonDetails(const Person &p) {
    cout << "Name: " << p.name << endl;
    cout << "Date of Birth: " << p.dob.day << "/" << p.dob.month << "/" << p.dob.year << endl;
}

int main() {
    Person person;

    // Reading name and date of birth
    cout << "Enter your name: ";
    getline(cin, person.name);
    cout << "Enter your birth day: ";
    cin >> person.dob.day;
    cout << "Enter your birth month: ";
    cin >> person.dob.month;
    cout << "Enter your birth year: ";
    cin >> person.dob.year;

    // Displaying name and date of birth
    cout << "\nYour Details:\n";
    displayPersonDetails(person);

    return 0;
}
