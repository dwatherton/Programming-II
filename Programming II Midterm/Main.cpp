#include"Book.h"			
#include<iostream>

//Global Variables

//Function Declarations
void menu();
void add_new_book(vector<Book> &book_list);
void display_all_books(vector<Book> book_list);
void borrow_book(vector<Book> &book_list, string book_title);


int main()
{
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

		case 1: //1. Add New Book
		{
			add_new_book(book_list);
			system("pause");
			break;
		}//Case 1

		case 2: //2. Display All Books
		{
			display_all_books(book_list);
			system("pause");
			break;
		}

		case 3: //3. Borrow Book
		{
			cout << endl << "Enter book title to borrow: ";
			getline(cin, book_title);
			borrow_book(book_list, book_title);
			system("pause");
			break;
		}

		case 4: //4. Exit
		{
			system("exit");
			break;
		}

		default:
		{
			cout << "Please enter 1 - 4..." << endl;
			system("pause");
			break;
		}

		}//Switch

	} while (choice != 4);
	system("pause");
	return 0;
}//Main


//Function Definitions
void menu()
{
	cout << "			Welcome to the Library!" << endl;
	cout << "			 1. Add a new book" << endl;
	cout << "			 2. Display all books" << endl;
	cout << "			 3. Borrow book" << endl;
	cout << "			 4. EXIT" << endl << endl;
	return;
}//Menu


void add_new_book(vector<Book> &book_list)
{
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

	Author author(author_name, author_email);
	authors.push_back(author);

	cout << endl << "Add another author? (yes:y no:n) ";
	cin >> answer;
	cin.ignore();
	cout << endl;

	if (answer == 'y' || answer == 'Y')
	{
		goto addauthor;
	}

	Book book(book_title, authors);
	book.set_borrowed(false);
	book_list.push_back(book);

	cout << "Add another book? (yes:y no:n) ";
	cin >> answer;
	cin.ignore();
	cout << endl;

	if (answer == 'y' || answer == 'Y')
	{
		goto addbook;
	}

	return;
}//Add_New_Book


void display_all_books(vector<Book> book_list)
{
	//Local Variables

	//Code
	cout << endl << "Below is a list of all of the books in the library catalog!!" << endl;
	cout << "Note: Any book on this list may already be actively borrowed!" << endl << endl;

	for (unsigned int i = 0; i < book_list.size(); i++)
	{
		cout << "Book " << i + 1 << ": " << book_list.at(i).get_title() << endl;

		for (unsigned int j = 0; j < book_list.at(i).get_authors().size(); j++)
		{
			cout << "Author " << j + 1 << "'s Name:  " << book_list.at(i).get_authors().at(j).get_name() << endl;
			cout << "Author " << j + 1 << "'s Email: " << book_list.at(i).get_authors().at(j).get_email() << endl;
		}
	}//For
	cout << endl;
	return;
}//Display_All_Books


void borrow_book(vector<Book> &book_list, string book_title)
{
	//Local Variables
	bool flag = false;

	//Code
	for (unsigned int i = 0; i < book_list.size(); i++)
	{
		if (book_title == book_list.at(i).get_title())
		{
			flag = true;
			if (book_list.at(i).is_borrowed())
			{
				cout << endl << "The book '" << book_list.at(i).get_title() << "'" << " is in our catalog, but has already been BORROWED!" << endl << endl;
				break;
			}//if
			else
			{
				cout << endl << "You have borrowed the book '" << book_list.at(i).get_title() << "'." << endl << endl;
				book_list.at(i).set_borrowed(true);
				break;
			}//else
		}//if
	}//for
	if (flag == false)
	{
		cout << endl << "This book is NOT available!" << endl << endl;
	}
	return;
}//Borrow_Book