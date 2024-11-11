#include <iostream>
#include <string>
using namespace std;

// Structure to represent a book
struct Book {
    int book_id;
    string title;
    string author;
    double price;
};

// Function to print book details
void printBookDetails(const Book &b) {
    cout << "Book ID: " << b.book_id << endl;
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: Rs" << b.price << endl;
}

int main() {
    Book myBook;

    // Reading book details
    cout << "Enter Book ID: ";
    cin >> myBook.book_id;
    cin.ignore(); // To ignore the newline character left by previous input
    cout << "Enter Title: ";
    getline(cin, myBook.title);
    cout << "Enter Author: ";
    getline(cin, myBook.author);
    cout << "Enter Price: ";
    cin >> myBook.price;

    // Printing book details
    cout << "\nBook Details:\n";
    printBookDetails(myBook);

    return 0;
}
