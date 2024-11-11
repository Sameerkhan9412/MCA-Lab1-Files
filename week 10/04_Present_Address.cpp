#include <iostream>
#include <string>
using namespace std;

// Union to store different address details (one at a time)
union AddressInfo {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[30];
    char state[30];
    char zip[10];
};

int main() {
    AddressInfo address;

    // Store and display the present address (hostel address)
    cout << "Enter your hostel address: ";
    cin.getline(address.hostel_address, 100);

    cout << "\nYour present address is: " << address.hostel_address << endl;

    return 0;
}
