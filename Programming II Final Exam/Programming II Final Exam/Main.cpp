//Main.cpp
#include"Bill.h"
#include<iomanip>
using namespace library;
using namespace std;

//Global Variables


//Function Declarations
/*** Menu Functions ***/
void main_menu();
void transaction_menu();
void library_menu();
void book_menu();
void customer_menu();

/*** Transaction Menu Functions (Complete) ***/
void sell_book(Library &library, Bill bill);
void check_out_book(Library &library, Book book, vector<Book> &book_list, Customer customer, vector<Customer> &customer_list);
void check_in_book(Library &library, Book book, vector<Book> &book_list, Customer customer, vector<Customer> &customer_list);
void price_of_two_books(Library library, Book book); //Implementation of OPERATOR OVERLOADING in this Function!
void total_pages_of_two_books(Library library, Book book); //FRIEND FUNCTION is called in this Function after the books the user entered are found!
int library::total_pages(Book book_one, Book book_two); //FRIEND FUNCTION of Book.h, had to use the scope resolution operator and select the proper namespace for this to work!

/*** Library Menu Functions (Complete) ***/
void display_library_info(Library library);
void change_late_fee(Library &library);

/*** Book Menu Functions (Complete) ***/
void add_book(Library &library, Book &book, Author &author);
void view_book_list(Library library);
void search_for_book(Library library);
void delete_book(Library &library);

/*** Customer Menu Functions (Complete) ***/
void add_customer(Library &library, Customer &customer, Person &person);
void view_customer_list(Library library);
void search_for_customer(Library library);
void delete_customer(Library &library);

/*** File Functions (Work in Progress) ***/
void save_changes(Library library);
void read_files(Library &library);

int main() {
	cout << fixed << setprecision(2);
	//Local Variables
	int choice, sub_choice; //Choice is for the Main Menu and Sub_Choice is for the Sub Menu's!
	Person person; //Create an unitialized person object to be used in the Add Customer Sub Menu!
	Author author; //Create an unitialized author object to be used in the Add Book Sub Menu!
	Book book; //Create an unitialized book object to be used in the Add Book Sub Menu!
	Customer customer; //Create an unitialized customer object to be used in the Add Customer sub Menu!
	vector<Book> book_list; //Create an vector of books to initialize a library object!
	vector<Customer> customer_list; //Create a vector of customers to initialize a library object!
	Library library("UALR Library", "2801 South University", "501-569-3123", 5.99, book_list, customer_list); //Create a generic UALR Library object (using the biggest constructor).
	Bill bill;


	//Code
	read_files(library);
	do {    // Main Menu's Do-While loop.
		system("cls");
		main_menu();
		cout << endl << endl << "Enter your choice here: => ";
		cin >> choice;
		cout << endl;
		cin.ignore();

		switch (choice) { //Main Menu's Switch.

		case 1: { //Transaction Menu Start (Choice = 1)
			do {    //Transaction Menu's Do-While loop.
				system("cls");
				transaction_menu();
				cout << endl << endl << "Enter your choice here: => ";
				cin >> sub_choice;
				cout << endl;
				cin.ignore();

				switch (sub_choice) { //Transaction Menu's Switch (Sub_Choice)

				case 1: { // Sell Book (Sub_Choice = 1)
					sell_book(library, bill);
					system("pause");
					break;
				}

				case 2: { //Check Out (Sub_Choice = 2)
					check_out_book(library, book, book_list, customer, customer_list);
					system("pause");
					break;
				}

				case 3: { //Check In (Sub_Choice = 3)
					check_in_book(library, book, book_list, customer, customer_list);
					system("pause");
					break;
				}

				case 4: { //Price Of Two Books (Sub_Choice = 4)
					price_of_two_books(library, book);
					system("pause");
					break;
				}

				case 5: { // Total Pages of Two Books (Sub_Choice = 5)
					total_pages_of_two_books(library, book);
					system("pause");
					break;
				}

				case 6: { //Return to Main Menu (Sub_Choice = 6)
					break;
				}

				default: { //Tell User To Enter 1 - 6 (Sub_Choice != 1 - 6)
					cout << "ERROR! '" << sub_choice << "' is not an option. Please enter a number between 1-6..." << endl << endl;
					system("pause");
					break;
				}

				}//Transaction Menu's Switch (Sub_Choice)

			} while (sub_choice != 6); //End Transaction Menu's Do-While loop.
			break;
		}//Transaction Menu End (Choice = 1)

		case 2: { //Library Menu Start (Choice = 2)
			do {    //Library Menu's Do-While loop.
				system("cls");
				library_menu();
				cout << endl << endl << "Enter your choice here: => ";
				cin >> sub_choice;
				cout << endl;
				cin.ignore();

				switch (sub_choice) { //Library Menu's Switch (Sub_Choice)

				case 1: { //Display Info (Sub_Choice = 1)
					display_library_info(library);
					system("pause");
					break;
				}

				case 2: { //Change Late Fee (Sub_Choice = 2)
					change_late_fee(library);
					system("pause");
					break;
				}

				case 3: { //Return to Main Menu (Sub_Choice = 3)
					break;
				}

				default: { //Tell User To Enter 1 - 3 (Sub_Choice != 1 - 3)
					cout << "ERROR! '" << sub_choice << "' is not an option. Please enter a number between 1-3..." << endl << endl;
					system("pause");
					break;
				}

				}//Library Menu's Switch (Sub_Choice)

			} while (sub_choice != 3); //End Library Menu's Do-While loop.
			break;
		}//Library Menu End (Choice = 2)

		case 3: { //Book Menu Start (Choice = 3)
			do {    //Book Menu's Do-While loop.
				system("cls");
				book_menu();
				cout << endl << endl << "Enter your choice here: => ";
				cin >> sub_choice;
				cout << endl;
				cin.ignore();

				switch (sub_choice) { //Book Menu's Switch (Sub_Choice)

				case 1: { //Add Book (Sub_Choice = 1)
					add_book(library, book, author);
					system("pause");
					break;
				}

				case 2: { //View Book List (Sub_Choice = 2)
					view_book_list(library);
					system("pause");
					break;
				}

				case 3: { //Search For Book (Sub_Choice = 3)
					search_for_book(library);
					system("pause");
					break;
				}

				case 4: { //Delete Book (Sub_Choice = 4)
					delete_book(library);
					system("pause");
					break;
				}

				case 5: { //Return to Main Menu (Sub_Choice = 5)
					break;
				}

				default: { //Tell User To Enter 1 - 5 (Sub_Choice != 1 - 5)
					cout << "ERROR! '" << sub_choice << "' is not an option. Please enter a number between 1-5..." << endl << endl;
					system("pause");
					break;
				}

				}//Book Menu's Switch

			} while (sub_choice != 5); //End Book Menu's Do-While loop.
			break;
		}//Book Menu End (Choice = 3)

		case 4: { //Customer Menu Start (Choice = 4)
			do {    //Customer Menu's Do-While loop.
				system("cls");
				customer_menu();
				cout << endl << endl << "Enter your choice here: => ";
				cin >> sub_choice;
				cout << endl;
				cin.ignore();

				switch (sub_choice) { //Customer Menu's Switch (Sub_Choice)

				case 1: { //Add Customer (Sub_Choice = 1)
					add_customer(library, customer, person);
					system("pause");
					break;
				}

				case 2: { //View Customer List (Sub_Choice = 2)
					view_customer_list(library);
					system("pause");
					break;
				}

				case 3: { //Search For Customer (Sub_Choice = 3)
					search_for_customer(library);
					system("pause");
					break;
				}

				case 4: { // Delete Customer (Sub_Choice = 4)
					delete_customer(library);
					system("pause");
					break;
				}

				case 5: { //Return to Main Menu (Sub_Choice = 5)
					break;
				}

				default: { //Tell User To Enter 1 - 5 (Sub_Choice != 1 - 5)
					cout << "ERROR! '" << sub_choice << "' is not an option. Please enter a number between 1-5..." << endl << endl;
					system("pause");
					break;
				}

				}//Customer Menu's Switch

			} while (sub_choice != 5); //End Customer Menu's Do-While loop.
			break;
		}//Customer Menu End (Choice = 4)

		case 5: { //Exit (Choice = 5)
			cout << "Thank you for using the " << library.get_name() << " System. Have a nice day!" << endl << endl;
			system("exit");
			break;
		}

		default: { //Tell User To Enter 1 - 5 (Choice != 1 - 5)
			cout << "ERROR! '" << choice << "' is not an option. Please enter a number between 1-5..." << endl << endl;
			system("pause");
			break;
		}
		}//Main Menu's Switch.

	} while (choice != 5);
	save_changes(library);
	system("pause");
	return 0;
}//Main




 //Function Definitions
 /*** Menu Functions ***/
void main_menu()
{
	//Display Main Menu
	cout << "				Welcome to the Library System!" << endl;
	cout << "				1. Transaction Menu" << endl;
	cout << "				2. Library Menu" << endl;
	cout << "				3. Book Menu" << endl;
	cout << "				4. Customer Menu" << endl;
	cout << "				5. Exit" << endl;
	return;
}//Main_Menu

void transaction_menu()
{
	//Display Transaction Menu
	cout << "				Transaction Menu:" << endl;
	cout << "				1. Sell Book" << endl;
	cout << "				2. Check Out" << endl;
	cout << "				3. Check In" << endl;
	cout << "				4. Calculate Total Price of Two Books" << endl;
	cout << "				5. Calculate Total Pages of Two Books" << endl;
	cout << "				6. Return to Main Menu" << endl;
	return;
}//Transaction_Menu

void library_menu()
{
	//Display Library Menu
	cout << "				Library Menu:" << endl;
	cout << "				1. Display Info" << endl;
	cout << "				2. Change Late Fee" << endl;
	cout << "				3. Return to Main Menu" << endl;
	return;
}//Library_Menu

void book_menu()
{
	//Display Book Menu
	cout << "				Book Menu:" << endl;
	cout << "				1. Add Book" << endl;
	cout << "				2. View Book List" << endl;
	cout << "				3. Search for Book" << endl;
	cout << "				4. Delete Book" << endl;
	cout << "				5. Return to Main Menu" << endl;
	return;
}//Book_Menu

void customer_menu()
{
	//Display Customer Menu
	cout << "				Customer Menu:" << endl;
	cout << "				1. Add Customer" << endl;
	cout << "				2. View Customer List" << endl;
	cout << "				3. Search for Customer" << endl;
	cout << "				4. Delete Customer" << endl;
	cout << "				5. Return to Main Menu" << endl;
	return;
}//Customer_menu




 /*** Transaction Menu Functions ***/
void sell_book(Library &library, Bill bill) {
	//Local Variables
	string isbn;
	bool found = false, available = false;
	vector<Book> book_list = library.get_books_in_library();
	cout << fixed << setprecision(2);

	//Code
	if (book_list.size() >= 1) { //are there any books in the library?

		cout << "Enter isbn of book being purchased: ";
		cin >> isbn;
		cout << endl;

		for (unsigned int i = 0; i < book_list.size(); i++) { //check if book is on the list
			if (isbn == book_list.at(i).get_isbn()) {
				found = true;
				if (book_list.at(i).get_available() == true)
					available = true;
				break;
			}
		}

		if ((found == true) && (available == true)) { //if book has been found on the list and is available, sell it
			for (unsigned int i = 0; i < book_list.size(); i++)
			{
				if (book_list.at(i).get_isbn() == isbn && book_list.at(i).get_available() == true)
				{
					book_list.at(i).set_available(false);
					cout << "Price of book: $" << book_list.at(i).get_price() << endl;
					cout << "Sales Tax: $" << book_list.at(i).get_price() * .065 << endl;
					cout << "Total amount owed: $" << book_list.at(i).get_price() * 1.065 << endl;
					cout << "This book has been purchased and is no longer available." << endl << endl;
					break;
				}
			}
			library.set_books_in_library(book_list);
		}
		else if ((found == true) && (available == false)) { //if book was found but unavailable
			cout << "Sorry, a book with the ISBN '" << isbn << "' is unavailable!" << endl << endl;
		}

		else { //if book was not found
			cout << "Sorry a book with the ISBN, '" << isbn << "', could not be found!" << endl << endl;
		}
	}

	else { //if there are currently no books in library
		cout << "Sorry there are currently not any books in the library catalog!" << endl << endl;
	}

	return;
}//Sell_Book


void check_out_book(Library &library, Book book, vector<Book> &book_list, Customer customer, vector<Customer> &customer_list) {
	//Local Variables
	string isbn, phone;
	vector<Book> customer_books;
	bool found_book = false, found_customer = false, available = false;
	int book_pos, customer_pos;
	book_list = library.get_books_in_library();
	customer_list = library.get_customers();

	//Code
	if (book_list.size() >= 1 && customer_list.size() >= 1) {

		cout << "Enter the ISBN of the book to check out (XXX-X-XX-XXXXXX-X): ";
		cin >> isbn;
		cout << endl;

		cout << "Enter customer's phone number to check out a book: ";
		cin >> phone;
		cout << endl;

		for (unsigned int i = 0; i < book_list.size(); i++) { //searches for book and sets boolean variable found_book = true;
			if (isbn == book_list.at(i).get_isbn()) {
				found_book = true;
				book_pos = i;
				if (book_list.at(i).get_available() == true) //checks availablity and sets bool variable available == true;
					available = true;
			}
		}
		for (unsigned int i = 0; i < customer_list.size(); i++) { //searches for customer and sets boolean variable found_customer = true;
			if (phone == customer_list.at(i).get_phone()) {
				found_customer = true;
				customer_pos = i;
			}
		}

		if (found_book == true && found_customer == true && available == true) {
			for (unsigned int i = 0; i < book_list.size(); i++) { //sets the book matching user entered isbn to unavailable
				if (book_pos == i) {
					book_list.at(i).set_available(false);
					book = book_list.at(i);
				}
			}

			for (unsigned int i = 0; i < customer_list.size(); i++) { //sets the customers books checked out
				if (customer_pos == i) {
					customer_books = customer_list.at(i).get_books_checked_out();
					customer_books.push_back(book);
					customer_list.at(i).set_books_checked_out(customer_books);
					customer = customer_list.at(i);
				}
			}

			cout << customer.get_f_name() << " " << customer.get_l_name() << " has checked out the book '" << book.get_title() << "' with ISBN of " << isbn << "!" << endl << endl;

		}

		else if (found_book == false && found_customer == false) {
			cout << "Sorry, neither a book with the ISBN of '" << isbn << "' could be found, nor a customer with the phone number of '" << phone << "' could be found!" << endl << endl;
		}


		else if ((found_book == true) && (available == false)) {
			cout << "Sorry, the book with the ISBN of '" << isbn << "' is not available!" << endl;
		}

		else if (found_book == false) {
			cout << "Sorry, a book with the ISBN of '" << isbn << "' could NOT be found!" << endl << endl;
		}

		else if (found_customer == false) {
			cout << "Sorry, a customer with the phone number of '" << phone << "' could NOT be found!" << endl << endl;
		}

		library.set_books_in_library(book_list); //updates the list of books in library
		library.set_customers_in_library(customer_list); //updates the list of customers in library

	}

	else {
		cout << "Sorry there are not at least one book and at least one customer on file!" << endl << endl;
	}

	return;
}//Check_Out_Book



void check_in_book(Library &library, Book book, vector<Book> &book_list, Customer customer, vector<Customer> &customer_list) {
	//Local Variables
	string isbn, phone;
	vector<Book> customer_books;
	bool found_book = false, found_customer = false;
	int book_pos, customer_pos;
	book_list = library.get_books_in_library();
	customer_list = library.get_customers();

	//Code
	if (book_list.size() >= 1 && customer_list.size() >= 1) {

		cout << "Enter the ISBN of the book to check in (XXX-X-XX-XXXXXX-X): ";
		cin >> isbn;
		cout << endl;

		cout << "Enter customer's phone number to check in a book: ";
		cin >> phone;
		cout << endl;

		for (unsigned int i = 0; i < book_list.size(); i++) { //searches for book and sets boolean variable found_book = true and notes the book_pos.
			if (isbn == book_list.at(i).get_isbn()) {
				found_book = true;
				book_pos = i;
			}
		}
		for (unsigned int i = 0; i < customer_list.size(); i++) { //searches for customer and sets boolean variable found_customer = true and nots the customer_pos.
			if (phone == customer_list.at(i).get_phone()) {
				found_customer = true;
				customer_pos = i;
			}
		}


		if (found_book == true && found_customer == true) {
			for (unsigned int i = 0; i < book_list.size(); i++) { //sets the book matching user entered isbn to available
				if (book_pos == i) {
					book_list.at(i).set_available(true);
					book = book_list.at(i);
					break;
				}
			}
			for (unsigned int i = 0; i < customer_list.size(); i++) { //sets the customers books checked in
				if (customer_pos == i) {
					customer_books = customer_list.at(i).get_books_checked_out();
					customer_books.erase(customer_books.begin() + i);
					customer_list.at(i).set_books_checked_out(customer_books);
					customer = customer_list.at(i);
					break;
				}
			}

			cout << customer.get_f_name() << " " << customer.get_l_name() << " has checked in the book '" << book.get_title() << "' with ISBN of " << isbn << "!" << endl << endl;
		}
		else if (found_book == false && found_customer == false) {
			cout << "Sorry, neither a book with the ISBN of '" << isbn << "' could be found, nor a customer with the phone number of '" << phone << "' could be found!" << endl << endl;
		}
		else if (found_book == false) {
			cout << "Sorry, a book with the ISBN of '" << isbn << "' could NOT be found!" << endl << endl;
		}
		else if (found_customer == false) {
			cout << "Sorry, a customer with the phone number of '" << phone << "' could NOT be found!" << endl << endl;
		}

		library.set_books_in_library(book_list); //updates the list of books in library
		library.set_customers_in_library(customer_list); //updates the list of customers in library

	}

	else {
		cout << "Sorry there are not at least one book and at least one customer on file!" << endl << endl;
	}

	return;
}//Check_In_Book


void price_of_two_books(Library library, Book book) {
	//Local Variables
	string isbn_one, isbn_two;
	vector<Book> books;
	Book book_two;
	double total_price;
	bool found_book = false, found_book_two = false;
	books = library.get_books_in_library(); //get a list of books in library

														 //Code
	if (books.size() >= 1) { //make sure there is a book in the library (adding two of the same book's price IS ALLOWED HERE intentionally!)

		cout << "To check the total price of two books, please enter two book's ISBN's!" << endl << endl;

		cout << "Enter the first book's ISBN: ";
		getline(cin, isbn_one);
		cout << endl;

		cout << "Enter the second book's ISBN: ";
		getline(cin, isbn_two);
		cout << endl;

		for (unsigned int i = 0; i < books.size(); i++) { //set found_book = true if book one is found
			if (isbn_one == books.at(i).get_isbn()) {
				found_book = true;
			}
		}

		for (unsigned int i = 0; i < books.size(); i++) { //set found_book_two = true if book two is found
			if (isbn_two == books.at(i).get_isbn()) {
				found_book_two = true;
			}
		}

		if (found_book == true && found_book_two == true) { //if both books are found, add them up!
			for (unsigned int i = 0; i < books.size(); i++) {

				if (isbn_one == books.at(i).get_isbn()) { //get the first book from the list of books in the library
					book = books.at(i);
				}

				if (isbn_two == books.at(i).get_isbn()) { //get the second book from the list of books in the library
					book_two = books.at(i);
				}
			}

			total_price = book + book_two; //add the price of the two books together (OPERATOR OVERLOADING is functioning and correct!)

			cout << "The total price for the two books is: $" << total_price << "!" << endl << endl;
		}

		else if (found_book == false && found_book_two == false) { //if neither are found
			cout << "Sorry, neither book one with ISBN: '" << isbn_one << "' could be found, nor could book two with ISBN: '" << isbn_two << "' be found!" << endl << endl;
		}
		else if (found_book == false) { // if only book two is found
			cout << "Sorry, book one with ISBN: '" << isbn_one << "', could not be found!" << endl << endl;
		}
		else if (found_book_two == false) { //if only book one is found
			cout << "Sorry, book two with ISBN: '" << isbn_two << "', could not be found!" << endl << endl;
		}
	}

	else {
		cout << "Sorry there are currently not any books in the library catalog!" << endl << endl;
	}

	return;
}//Price_Of_Two_Books


void total_pages_of_two_books(Library library, Book book) {
	//Local Variables
	string isbn_one, isbn_two;
	vector<Book> books;
	Book book_two;
	int total_number_of_pages;
	bool found_book = false, found_book_two = false;
	books = library.get_books_in_library(); //get a list of books in library

														 //Code
	if (books.size() >= 1) { //make sure there is a book in the library (adding two of the same book's pages IS ALLOWED HERE intentionally!)

		cout << "To check the total pages of two books, please enter two book's ISBN's!" << endl << endl;

		cout << "Enter the first book's ISBN: ";
		getline(cin, isbn_one);
		cout << endl;

		cout << "Enter the second book's ISBN: ";
		getline(cin, isbn_two);
		cout << endl;

		for (unsigned int i = 0; i < books.size(); i++) { //set found_book = true if book one is found
			if (isbn_one == books.at(i).get_isbn()) {
				found_book = true;
			}
		}

		for (unsigned int i = 0; i < books.size(); i++) { //set found_book_two = true if book two is found
			if (isbn_two == books.at(i).get_isbn()) {
				found_book_two = true;
			}
		}

		if (found_book == true && found_book_two == true) { //if both books are found, add them up!
			for (unsigned int i = 0; i < books.size(); i++) {

				if (isbn_one == books.at(i).get_isbn()) { //get the first book from the list of books in the library
					book = books.at(i);
				}

				if (isbn_two == books.at(i).get_isbn()) { //get the second book from the list of books in the library
					book_two = books.at(i);
				}
			}

			total_number_of_pages = total_pages(book, book_two); //FRIEND FUNCTION CALLED HERE!

			cout << "The total number of pages in the two books is: " << total_number_of_pages << "!" << endl << endl;
		}

		else if (found_book == false && found_book_two == false) { //if neither are found
			cout << "Sorry, neither book one with ISBN: '" << isbn_one << "' could be found, nor could book two with ISBN: '" << isbn_two << "' be found!" << endl << endl;
		}
		else if (found_book == false) { // if only book two is found
			cout << "Sorry, book one with ISBN: '" << isbn_one << "', could not be found!" << endl << endl;
		}
		else if (found_book_two == false) { //if only book one is found
			cout << "Sorry, book two with ISBN: '" << isbn_two << "', could not be found!" << endl << endl;
		}
	}

	else {
		cout << "Sorry there are currently not any books in the library catalog!" << endl << endl;
	}

	return;
}//Total_Pages_Of_Two_Books


int library::total_pages(Book book_one, Book book_two) { //FRIEND FUNCTION with BOOK.h
	return (book_one.pages + book_two.pages);
}//Total_Pages




 /*** Library Menu Functions ***/
void display_library_info(Library library) {
	library.print();
	return;
}//Display_Library_Info


void change_late_fee(Library &library) {
	//Local Variables
	double new_late_fee;

	//Code
	cout << "Please Enter the new late fee: $";
	cin >> new_late_fee;
	library.set_late_fee(new_late_fee);
	cout << endl << "New late fee has been set to $" << new_late_fee << "!" << endl << endl;
	return;
}//Change_Late_Fee




 /*** Book Menu Functions ***/
void add_book(Library &library, Book &book, Author &author) {
	//Local Variables
	string book_title, isbn, authors_first_name, authors_last_name, authors_email_address, authors_phone_number;
	double price;
	int chapters, pages;
	bool available = true;
	char answer;
	vector<Author> authors;

	//Code
	cout << "Enter the Books Title: ";
	getline(cin, book_title);
	book.set_title(book_title);

	cout << "Enter the Books ISBN (XXX-X-XX-XXXXXX-X): ";
	cin >> isbn;
	cin.ignore();
	book.set_isbn(isbn);

	cout << "Enter the Books Price: $";
	cin >> price;
	book.set_price(price);

	cout << "Enter the Number of Chapters: ";
	cin >> chapters;
	cin.ignore();
	book.set_chapters(chapters);

	cout << "Enter the Number of Pages: ";
	cin >> pages;
	cin.ignore();
	book.set_pages(pages);

	book.set_available(available);
	cout << endl;
AddAnotherAuthor:

	cout << "Enter the Author's First Name: ";
	cin >> authors_first_name;
	cin.ignore();
	author.set_f_name(authors_first_name);

	cout << "Enter the Author's Last Name: ";
	cin >> authors_last_name;
	cin.ignore();
	author.set_l_name(authors_last_name);

	cout << "Enter the Author's Email Address: ";
	cin >> authors_email_address;
	cin.ignore();
	author.set_email(authors_email_address);

	cout << "Enter the Author's Phone Number: ";
	cin >> authors_phone_number;
	cin.ignore();
	author.set_phone_no(authors_phone_number);

	authors.push_back(author);

	cout << endl << "Add Another Author? (Y:Yes or N:No): ";
	cin >> answer;
	cout << endl;

	if (answer == 'y' || answer == 'Y') {
		goto AddAnotherAuthor;
	}

	book.set_authors(authors);
	library.add_book(book);

	return;
}//Add_Book


void view_book_list(Library library) {
	library.print_books();
	return;
}//View_Book_List


void search_for_book(Library library) {
	//Local Variables
	string isbn;

	//Code
	cout << "Please Enter the ISBN to search for a Book: ";
	getline(cin, isbn);
	cout << endl;

	library.search_book(isbn);

	return;
}//Search_For_Book


void delete_book(Library &library) {
	//Local Variables
	string isbn;

	//Code
	cout << "Please Enter the ISBN to Delete a Book: ";
	getline(cin, isbn);

	library.remove_book(isbn);

	return;
}//Delete_Book




 /*** Customer Menu Functions ***/
void add_customer(Library &library, Customer &customer, Person &person) {
	//Local Variables
	Date DOB;
	char sp;
	string customers_first_name, customers_last_name, customers_email, customers_phone_number, customers_drivers_license, customers_address;
	vector<Book> books_checked_out;

	//Code
	cout << "Enter the Customer's First Name: ";
	cin >> customers_first_name;
	cin.ignore();
	customer.set_f_name(customers_first_name);

	cout << "Enter the Customer's Last Name: ";
	cin >> customers_last_name;
	cin.ignore();
	customer.set_l_name(customers_last_name);

	cout << "Enter the Customer's Date of Birth (MM/DD/YY): ";
	cin >> DOB.month >> sp >> DOB.day >> sp >> DOB.year;
	customer.set_DOB(DOB);

	cout << "Enter the Customer's Email Address: ";
	cin >> customers_email;
	cin.ignore();
	customer.set_email(customers_email);

	cout << "Enter the Customer's Phone Number: ";
	cin >> customers_phone_number;
	cin.ignore();
	customer.set_phone_no(customers_phone_number);

	cout << "Enter the Customer's Drivers License Number: ";
	cin >> customers_drivers_license;
	cin.ignore();
	customer.set_d_license(customers_drivers_license);

	cout << "Enter the Customer's Address: ";
	getline(cin, customers_address);
	customer.set_address(customers_address);

	library.add_customer(customer);

	return;
}//Add_Customer


void view_customer_list(Library library) {
	library.print_customers();
	return;
}//View_Customer


void search_for_customer(Library library) {
	//Local Variables
	string phone_number;

	//Code
	cout << "Please Enter a Phone Number to Search for a Customer: ";
	getline(cin, phone_number);
	cout << endl;

	library.search_customer(phone_number);

	return;
}//Search_For_Customer


void delete_customer(Library &library) {
	//Local Variables
	string phone_number;

	//Code
	cout << "Please Enter a Phone Number to Delete a Customer: ";
	getline(cin, phone_number);

	library.remove_customer(phone_number);

	return;
}//Delete_Customer




 /*** File Functions ***/
void save_changes(Library library)//test function
{
	ofstream customer_file;
	ofstream book_file;
	customer_file.open("customer.dat");
	book_file.open("book.dat");

	vector<Book> book_list = library.get_books_in_library();
	vector<Customer> customer_list = library.get_customers();

	//save books to file
	for (unsigned int i = 0; i < book_list.size(); i++)//updated
	{
		char sp = ' ';
		string title = book_list.at(i).get_title();
		string isbn = book_list.at(i).get_isbn();
		vector<Author> authors = book_list.at(i).get_authors();
		double price = book_list.at(i).get_price();
		int chapters = book_list.at(i).get_chapters();
		int pages = book_list.at(i).get_pages();
		bool available = book_list.at(i).get_available();

		book_file << isbn << sp << price << sp << chapters << sp << pages << sp << available << sp << title << sp << "endtitle" << sp;

		for (unsigned int j = 0; j < authors.size(); j++)
		{
			string first = authors.at(j).get_f_name();
			string last = authors.at(j).get_l_name();
			string email = authors.at(j).get_email();
			string phone = authors.at(j).get_phone_no();

			book_file << first << sp << last << sp << email << sp << phone << sp;
		}
		book_file << "endauthors" << sp;
	}

	//save customers to file
	for (unsigned int i = 0; i < customer_list.size(); i++)//not updated
	{
		char sp = ' ';
		Date dob = customer_list.at(i).get_DOB();
		string first = customer_list.at(i).get_f_name();
		string last = customer_list.at(i).get_l_name();
		string email = customer_list.at(i).get_email();
		string phone = customer_list.at(i).get_phone();
		string license = customer_list.at(i).get_d_license();
		string address = customer_list.at(i).get_address();
		vector<Book> books = customer_list.at(i).get_books_checked_out();

		customer_file << dob.month << sp << dob.day << sp << dob.year << sp << first << sp << last << sp << email << sp << phone << sp << license << sp << address << sp << "endaddress" << sp;
		for (unsigned int j = 0; j < books.size(); j++)
		{
			string title = books.at(j).get_title();
			string isbn = books.at(j).get_isbn();
			vector<Author> authors = books.at(j).get_authors();
			double price = books.at(j).get_price();
			int chapters = books.at(j).get_chapters();
			int pages = books.at(j).get_pages();
			bool available = books.at(j).get_available();

			customer_file << isbn << sp << price << sp << chapters << sp << pages << sp << available << sp << title << sp << "endtitle" << endl;

			for (unsigned int k = 0; k < authors.size(); k++)
			{
				string first = authors.at(k).get_f_name();
				string last = authors.at(k).get_l_name();
				string email = authors.at(k).get_email();
				string phone = authors.at(k).get_phone_no();

				customer_file << first << sp << last << sp << email << sp << phone << sp;
			}
			customer_file << "endauthors" << sp;

		}
		customer_file << "endbooks" << sp;
	}
}


void read_files(Library &library)//test function
{
	ifstream customer_file;
	ifstream book_file;
	customer_file.open("customer.dat");
	book_file.open("book.dat");

	vector<Book> book_list;
	vector<Customer> customer_list;

	char sp = ' ';
	//book variables
	string title;
	string isbn;
	vector<Author> authors;
	double price;
	int chapters;
	int pages;
	bool available;
	//customer variables
	string first;
	string last;
	string email;
	string phone;
	string address;
	Date dob;
	string license;
	vector<Book> books;

	//author variables
	string author_first;
	string author_last;
	string author_email;
	string author_phone;

	if (book_file.is_open()) {  //if file exists and is open, read from it
		//read book file
		book_file >> isbn >> price >> chapters >> pages >> available;
		while (!book_file.eof())
		{
			string input;

			vector<string> title_list;
			book_file >> input;
			while (input != "endtitle")
			{
				title_list.push_back(input);
				book_file >> input;
			}

			for (unsigned int i = 0; i < title_list.size(); i++)
			{
				title = title + title_list.at(i) + " ";
			}

			vector<Author> authors;
			book_file >> input;
			while (input != "endauthors")
			{
				author_first = input;
				book_file >> author_last >> author_email >> author_phone;
				Author author(author_first, author_last, author_email, author_phone);
				authors.push_back(author);
				book_file >> input;
			}
			Book book(title, isbn, authors, price, chapters, pages, available);
			book_list.push_back(book);
			book_file >> title >> isbn >> price >> chapters >> pages >> available;
		}
		library.set_books_in_library(book_list);
	}
	else {  //if file does not exist, create it
		ofstream book_file;
		book_file.open("book.dat");
	}

	if (customer_file.is_open()) { //if file exists and is open, read from it
		//read customer file
		int day, month, year;
		customer_file >> month >> day >> year >> first >> last >> email >> phone >> license;
		while (!customer_file.eof())
		{
			dob.day = day;
			dob.month = month;
			dob.year = year;
			string address_input;
			vector<string> temp;
			customer_file >> address_input;
			while (address_input != "endaddress")//this while loop is needed because an address has spaces in it, so this puts each part into a vector
			{
				temp.push_back(address_input);
				customer_file >> address_input;
			}
			for (unsigned int i = 0; i < temp.size(); i++)//this loop adds all the parts of the address together
			{
				address = address + temp.at(i) + " ";
			}
			string book_input;
			customer_file >> book_input;
			while (book_input != "endbooks")
			{
				isbn = book_input;
				customer_file >> price >> chapters >> pages >> available;

				string title_input;
				vector<string> title_list;
				customer_file >> title_input;
				while (title_input != "endtitle")
				{
					title_list.push_back(title_input);
					customer_file >> title_input;
				}
				title = "";
				for (unsigned int i = 0; i < title_list.size(); i++)
				{
					title = title + title_list.at(i) + " ";
				}

				authors.clear();//clears existing author vector
				string author_input;
				customer_file >> author_input;
				while (author_input != "endauthors")//brings in authors
				{
					author_first = author_input;
					customer_file >> author_last >> author_email >> author_phone;
					Author author(author_first, author_last, author_email, author_phone);
					authors.push_back(author);
					customer_file >> author_input;
				}

				Book book(title, isbn, authors, price, chapters, pages, available);
				books.push_back(book);
				customer_file >> book_input;
			}
			Customer customer(dob, first, last, email, phone, license, address, books);
			customer_list.push_back(customer);
			customer_file >> month >> day >> year >> first >> last >> email >> phone >> license;
		}
		library.set_customers_in_library(customer_list);
	}
	else { //if file does not exist, create it
		ofstream customer_file;
		customer_file.open("customer.dat");
	}
}