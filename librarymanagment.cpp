#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct Book {
    string title;
    string author;
    string ISBN;
    bool isAvailable;
    int dueDate;
};

struct Borrower {
    string name;
    string ID;
    vector<Book> borrowedBooks;
};

vector<Book> bookDatabase;
vector<Borrower> borrowerDatabase;

void addBook() {
    Book book;
    cout << "Enter book title: ";
    cin >> book.title;
    cout << "Enter book author: ";
    cin >> book.author;
    cout << "Enter book ISBN: ";
    cin >> book.ISBN;
    book.isAvailable = true;
    book.dueDate = 0;
    bookDatabase.push_back(book);
    cout << "Book added successfully!\n";
}

void searchBook() {
    string query;
    cout << "Enter book title, author, or ISBN to search: ";
    cin >> query;
    bool found = false;
    for(Book book : bookDatabase) {
        if(book.title == query || book.author == query || book.ISBN == query) {
            cout << "Book found: " << book.title << " by " << book.author << " (ISBN: " << book.ISBN << ")\n";
            found = true;
        }
    }
    if(!found) {
        cout << "Book not found!\n";
    }
}

void checkoutBook() {
    string ISBN;
    cout << "Enter book ISBN to checkout: ";
    cin >> ISBN;
    for(Book &book : bookDatabase) {
        if(book.ISBN == ISBN && book.isAvailable) {
            string borrowerID;
            cout << "Enter borrower ID: ";
            cin >> borrowerID;
            for(Borrower &borrower : borrowerDatabase) {
                if(borrower.ID == borrowerID) {
                    book.isAvailable = false;
                    book.dueDate = 7; // Set due date to 7 days from now
                    borrower.borrowedBooks.push_back(book);
                    cout << "Book checked out successfully!\n";
                    return;
                }
            }
            cout << "Borrower not found!\n";
            return;
        }
    }
    cout << "Book not found or not available!\n";
}

void returnBook() {
    string ISBN;
    cout << "Enter book ISBN to return: ";
    cin >> ISBN;
    for(Book &book : bookDatabase) {
        if(book.ISBN == ISBN && !book.isAvailable) {
            for(Borrower &borrower : borrowerDatabase) {
                for(auto it = borrower.borrowedBooks.begin(); it != borrower.borrowedBooks.end(); ++it) {
                    if(it->ISBN == ISBN) {
                        book.isAvailable = true;
                        book.dueDate = 0;
                        borrower.borrowedBooks.erase(it);
                        cout << "Book returned successfully!\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "Book not found or already returned!\n";
}

void fineCalculation() {
    for(Borrower &borrower : borrowerDatabase) {
        for(Book &book : borrower.borrowedBooks) {
            if(book.dueDate < 0) {
                int fine = (0 - book.dueDate) * 10;
                cout << "Borrower " << borrower.name << " has a fine of $" << fine << " for book " << book.title << ".\n";
            }
        }
    }
}

void addBorrower() {
    Borrower borrower;
    cout << "Enter borrower name: ";
    cin >> borrower.name;
    cout << "Enter borrower ID: ";
    cin >> borrower.ID;
    borrowerDatabase.push_back(borrower);
    cout << "Borrower added successfully!\n";
}

int main() {
    int choice;
    while(true) {
        cout << "Library Management System\n";
        cout << "1. Add book\n";
        cout << "2. Search book\n";
        cout << "3. Checkout book\n";
        cout << "4. Return book\n";
        cout << "5. Calculate fine\n";
        cout << "6. Add borrower\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                checkoutBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                fineCalculation();
                break;
            case 6:
                addBorrower();
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}