//Main.cpp
#include"Book.h"
#include<iostream>

//Global Variables

//Function Declarations
void menu();
void add_new_book(vector<Book> &book_list);
void borrow_book(vector<Book> &book_list, string book_title);
void display_books_information(vector<Book> book_list, string book_title);


int main() {
	//Local Variables
	int choice;
	vector<Book> book_list;
	string book_title;

	//Code
	do {
		system("cls");
		menu();

		cout << "Enter your choice => ";
		cin >> choice;
		cin.ignore();

		switch (choice) {
		case 1:	//1. Add a new book
		{
			add_new_book(book_list);
			system("pause");
			break;
		}//Case 1

		case 2:	//2. Borrow a book
		{
			cout << endl << "Enter book title to borrow: ";
			getline(cin, book_title);
			borrow_book(book_list, book_title);
			system("pause");
			break;
		}//Case 2

		case 3:	//3. Display book information
		{
			cout << endl << "Enter the book title to view it's information: ";
			getline(cin, book_title);
			display_books_information(book_list, book_title);
			system("pause");
			break;
		}

		case 4:	//4.	EXIT
		{
			cout << endl;
			system("exit");
			break;
		}

		default:
		{
			cout << endl << "Please Enter 1 - 4..." << endl << endl;
			system("pause");
			break;
		}

		}//Switch

	} while (choice != 4);

	system("pause");
	return 0;
}//Main


 //Function Definitions
void menu() {
	cout << "			   Welcome to the Library!" << endl;
	cout << "			 1. Add a new book" << endl;
	cout << "			 2. Borrow book" << endl;
	cout << "			 3. Display books information" << endl;
	cout << "			 4. EXIT" << endl << endl;
	return;
}


void add_new_book(vector<Book> &book_list) {
	//Local Variables
	string book_title, author_name, author_email;
	char answer;

	//Code
	cout << endl;

addbook:

	cout << "Enter Book's Title: ";
	getline(cin, book_title);

	vector<Author> authors;

addauthor:

	cout << "Enter Author's Name: ";
	getline(cin, author_name);

	cout << "Enter Author's Email: ";
	getline(cin, author_email);
	cout << endl;

	Author author(author_name, author_email);
	authors.push_back(author);

	cout << "Add another author? (yes:y no:n) ";
	cin >> answer;
	cin.ignore();

	if (answer == 'y' || answer == 'Y') {
		goto addauthor;
	}//If

	Book book(book_title, authors);
	book.set_borrowed(false);
	book_list.push_back(book);

	cout << "Add another book? (yes:y no:n) ";
	cin >> answer;
	cin.ignore();
	cout << endl;

	if (answer == 'y' || answer == 'Y') {
		goto addbook;
	}

	return;
}//Add_New_Book


void borrow_book(vector<Book> &book_list, string book_title) {
	//Local Variables
	bool flag = false;

	//Code
	for (unsigned int i = 0; i < book_list.size(); i++) {
		if (book_title == book_list.at(i).get_title()) {
			flag = true;
			if (book_list.at(i).is_borrowed()) {
				cout << endl << "The book '" << book_list.at(i).get_title() << "'" << " is in our catalog, but has already been BORROWED!" << endl << endl;
				break;
			}//if
			else {
				cout << endl << "You have borrowed the book '" << book_list.at(i).get_title() << "'." << endl << endl;
				book_list.at(i).set_borrowed(true);
				break;
			}//else
		}//if
	}//for
	if (flag == false)
	{
		cout << endl << "This book '" << book_title << "' is NOT available!" << endl << endl;
	}
	return;
}//Borrow_Book


void display_books_information(vector<Book> book_list, string book_title) {
	//Local Variables
	string borrowed;
	bool flag = false;

	//Code
	cout << endl;
	for (unsigned int i = 0; i < book_list.size(); i++) {
		if (book_title == book_list.at(i).get_title()) {
			flag = true;
			cout << "Book Title: " << book_list.at(i).get_title() << "." << endl;
			if (book_list.at(i).is_borrowed() == 0) {
				borrowed = "No!";
			}//If
			else {
				borrowed = "Yes!";
			}//Else
			cout << "Book Borrowed: " << borrowed << endl;
			for (unsigned int j = 0; j < book_list.at(i).get_authors().size(); j++) {
				cout << "Author " << j + 1 << "'s  Name: " << book_list.at(i).get_authors().at(j).get_name() << "." << endl;
				cout << "Author " << j + 1 << "'s Email: " << book_list.at(i).get_authors().at(j).get_email() << "." << endl;
			}//For
		}//If
	}//For
	if (flag == false) {
		cout << "Sorry, '" << book_title << "' is not in the libraries catalog!" << endl;
	}
	cout << endl;
}//Display_Books_Information