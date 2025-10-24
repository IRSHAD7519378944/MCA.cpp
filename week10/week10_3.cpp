/*3# Create a Book structure containing book_id, title, author name and price. Write 
a C++ program to pass a structure as a function argument and print the book 
details. */

#include <iostream>
#include <string>
using namespace std;

struct Book {
    int book_id;
    string title;
    string author;
    double price;
};

// Function to print book details (structure passed as argument)
void printBookDetails(const Book &b) {
    cout << "\nBook ID: " << b.book_id;
    cout << "\nTitle: " << b.title;
    cout << "\nAuthor: " << b.author;
    cout << "\nPrice: $" << b.price << endl;
}

int main() {
    Book book;

    // Input book details
    cout << "Enter book ID: ";
    cin >> book.book_id;
    cin.ignore(); // Clear input buffer
    cout << "Enter book title: ";
    getline(cin, book.title);
    cout << "Enter author name: ";
    getline(cin, book.author);
    cout << "Enter book price: ";
    cin >> book.price;

    // Pass structure to function to print details
    printBookDetails(book);

    return 0;
}

