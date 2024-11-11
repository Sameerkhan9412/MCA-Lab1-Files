#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    double basicPay;
    double grossSalary;
};

// Function to calculate DA and Gross Salary
void calculateGrossSalary(Employee &emp) {
    double DA = 0.52 * emp.basicPay;  // 52% of basic pay
    emp.grossSalary = emp.basicPay + DA;
}

int main() {
    const int NUM_EMPLOYEES = 3;
    Employee employees[NUM_EMPLOYEES];

    // Reading employee details
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Enter details for employee " << i + 1 << endl;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Basic Pay: ";
        cin >> employees[i].basicPay;

        // Calculate gross salary
        calculateGrossSalary(employees[i]);
    }

    // Displaying employee details
    cout << "\nEmployee Name and Gross Salary:\n";
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Employee " << i + 1 << ": ";
        cout << "Name: " << employees[i].name 
             << ", Gross Salary: " << employees[i].grossSalary << endl;
    }

    return 0;
}
