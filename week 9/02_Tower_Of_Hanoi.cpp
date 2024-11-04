#include <iostream>
#include <cmath>
using namespace std;

// Recursive function to solve Towers of Hanoi
void towersOfHanoiRecursive(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    towersOfHanoiRecursive(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towersOfHanoiRecursive(n - 1, aux_rod, to_rod, from_rod);
}

// Iterative function to solve Towers of Hanoi
void towersOfHanoiIterative(int n, char from_rod, char to_rod, char aux_rod) {
    int total_moves = pow(2, n) - 1;  // Total moves required
    char rods[3] = {from_rod, to_rod, aux_rod};

    // If number of disks is even, swap the destination and auxiliary rods
    if (n % 2 == 0) {
        swap(to_rod, aux_rod);
    }

    for (int i = 1; i <= total_moves; i++) {
        int disk = __builtin_ctz(i) + 1;  // Determine which disk to move
        int from = (i / (1 << (disk - 1))) % 3;
        int to = (from + 1 + (disk % 2)) % 3;
        
        cout << "Move disk " << disk << " from rod " << rods[from] << " to rod " << rods[to] << endl;
    }
}

int main() {
    int n, choice;
    cout << "Enter the number of disks: ";
    cin >> n;

    cout << "Choose method:\n";
    cout << "1. Recursive\n";
    cout << "2. Iterative\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Steps to solve Towers of Hanoi (Recursive):" << endl;
        towersOfHanoiRecursive(n, 'A', 'C', 'B');  // A, B, C are rod names
    } else if (choice == 2) {
        cout << "Steps to solve Towers of Hanoi (Iterative):" << endl;
        towersOfHanoiIterative(n, 'A', 'C', 'B');  // A, B, C are rod names
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
