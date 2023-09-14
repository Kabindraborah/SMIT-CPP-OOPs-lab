#include <iostream>
#include <string>
using namespace std;

class BOOK {
    private:
        string title;
        string author;
        float price;
        string isbn;

    public:
        BOOK() {}

     BOOK(string bookTitle, string bookAuthor, float bookPrice, string bookIsbn) {
    title = bookTitle;
    author = bookAuthor;
    price = bookPrice;
    isbn = bookIsbn;
}


        void read() {
            cout << "\nEnter the title of the book: ";
            cin >> title;
            cout << "Enter the author of the book: ";
            cin >> author;
            cout << "Enter the price of the book: ";
            cin >> price;
            cout << "Enter the ISBN of the book: ";
            cin >> isbn;
        }

        void display() {
            cout << "\nTitle: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
            cout << "ISBN: " << isbn << endl;
        }

        bool search_book(string isbn) {
            if (isbn == this->isbn) {
                return true;
            } else {
                return false;
            }
        }
};

int main() {
    BOOK books[5];

    int n;
    cout<<"Enter the no of books: ";
    cin>>n;

    // Read the details of the books
    for (int i = 0; i < n; i++) {
        books[i].read();
    }

    // Display the details of the books
    for (int i = 0; i < n; i++) {
        books[i].display();
    }

    // Search for a book by ISBN
    string isbn;
    cout << "Enter the ISBN of the book to search: ";
    cin >> isbn;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (books[i].search_book(isbn)) {
            found = true;
            books[i].display();
            break;
        }
    }

    if (!found) {
        cout << "Book not found" << endl;
    }

    return 0;
}
