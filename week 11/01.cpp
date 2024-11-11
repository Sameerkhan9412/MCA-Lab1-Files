#include <iostream>
using namespace std;

int main() {
    string name, branch;
    int year;

    // Taking input from the user
    cout << "Enter your name: ";
    getline(cin, name); // using getline to allow spaces in the name

    cout << "Enter your branch: ";
    getline(cin, branch); // using getline to allow spaces in the branch name

    cout << "Enter your year: ";
    cin >> year;

    // Displaying the information on separate lines
    cout << "\nName: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Year: " << year << endl;

    return 0;
}
