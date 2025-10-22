#include <iostream>
#include <string>
using namespace std;

// Structure to store book details
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
    Book myBook;

    // Input book details
    cout << "Enter book ID: ";
    cin >> myBook.book_id;
    cin.ignore(); // Clear input buffer
    cout << "Enter book title: ";
    getline(cin, myBook.title);
    cout << "Enter author name: ";
    getline(cin, myBook.author);
    cout << "Enter book price: ";
    cin >> myBook.price;

    // Pass structure to function to print details
    printBookDetails(myBook);

    return 0;
}

