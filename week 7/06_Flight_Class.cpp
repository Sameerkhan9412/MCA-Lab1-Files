#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flight_no;         // Flight number
    string source;         // Source of the flight
    string destination;    // Destination of the flight
    double fare;           // Fare of the flight

public:
    // Member function to set flight details
    void set_data(int no, string src, string dest, double f) {
        this->flight_no = no;         // Set flight number using 'this' pointer
        this->source = src;           // Set source using 'this' pointer
        this->destination = dest;     // Set destination using 'this' pointer
        this->fare = f;               // Set fare using 'this' pointer
    }

    // Member function to display flight information using 'this' pointer
    void display_info() {
        cout << "\nFlight Information:" << endl;
        cout << "Flight Number: " << this->flight_no << endl;      // Access flight_no using 'this'
        cout << "Source: " << this->source << endl;               // Access source using 'this'
        cout << "Destination: " << this->destination << endl;     // Access destination using 'this'
        cout << "Fare: Rs. " << this->fare << endl;                  // Access fare using 'this'
    }
};

int main() {
    Flight f1;  // Create an object of the Flight class

    int flightNo;
    string source, destination;
    double cost;

    // Take user input for flight details
    cout << "Enter flight number: ";
    cin >> flightNo;
    cin.ignore();  // Clear the newline character left by `cin`
    cout << "Enter source: ";
    getline(cin, source);  // Use getline for multi-word input
    cout << "Enter destination: ";
    getline(cin, destination);
    cout << "Enter cost: ";
    cin >> cost;

    // Set the data for the flight object
    f1.set_data(flightNo, source, destination, cost);

    // Display the flight information
    f1.display_info();

    return 0;
}
