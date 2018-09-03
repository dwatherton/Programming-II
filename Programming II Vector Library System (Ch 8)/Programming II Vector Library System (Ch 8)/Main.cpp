//Chapter 8 Vector Library System
#include<vector>
#include<iostream>
#include<string>
using namespace std;

//Global Variables

//Function Declarations
void menu();
void display_book_list(vector<string>);
bool search_book_by_title(vector<string>, string);
void search_by_keyword(vector<string>, string);
void delete_book(vector<string>&, string);



//Main
int main()
{
	//Local Variables
	int choice = 0;
	string book_title, keyword;
	vector<string> book_list;


	//Code
	do
	{
		system("cls");
		//1. Show the Menu!
		menu();

		//2. Ask the user to enter his/her choice!
		cout << "Enter your choice HERE => ";
		cin >> choice;
		cin.ignore();

		//3. Handle the user's choices!
		switch (choice)
		{
		case 1: {
			//Add Book
			cout << "Enter the new book title: " << endl;
			getline(cin, book_title);
			book_list.push_back(book_title);
			cout << "The book titled: " << book_title << " has been added" << endl;
			system("pause");
			break;
		}//Case 1
		case 2: {
			//Display Book
			display_book_list(book_list);
			system("pause");
			break;
		}//Case 2
		case 3: {
			//Search for Book
			cout << "Enter the book title to search for: ";
			getline(cin, book_title);
			bool find = search_book_by_title(book_list, book_title);
			if (find)
			{
				cout << "The book is available..." << endl;
			}
			else
			{
				cout << "The book is NOT available..." << endl;
			}
			system("pause");
			break;
		}//Case 3
		case 4: {
			cout << "Enter the keyword: ";
			cin >> keyword;
			search_by_keyword(book_list, keyword);
			system("pause");
			break;
		}//Case 4
		case 5: {
			cout << "Enter the book title to be deleted: ";
			getline(cin, book_title);
			bool find = search_book_by_title(book_list, book_title);
			if (find)
			{
				delete_book(book_list, book_title);
			}
			else
			{
				cout << "The book is NOT availabe" << endl;
			}
			system("pause");
			break;
		}//Case 5
		case 6: {
			system("exit");
			break;
		}//Case 6
		default:
			cout << "Error Please Select 1-6..." << endl;
		}//Switch

	} while (choice != 6);
	return 0;
}//Main




 //Function Definitions
void menu()
{
	//Local Variables

	//Code
	cout << "                      Library System" << endl;
	cout << "           Created By: Programming II Students" << endl << endl;
	cout << "           1. Add Book" << endl;
	cout << "           2. Display Book" << endl;
	cout << "           3. Search Book" << endl;
	cout << "           4. Search using keyword" << endl;
	cout << "           5. Delete Book" << endl;
	cout << "           6. Quit" << endl;
	return;
}//Menu
void display_book_list(vector<string> book_list)
{
	//Local Variables

	//Code
	if (book_list.empty())
	{
		cout << "There are no books to display" << endl;
	}//If
	else
	{
		for (int i = 0; i < book_list.size(); i++)
		{
			cout << "Book " << i + 1 << ": " << book_list.at(i) << endl;
		}
	}//Else
}//Display_Book_List
bool search_book_by_title(vector<string> book_list, string book_title)
{
	//Local Variables
	bool flag = false;
	//Code
	for (int i = 0; i < book_list.size(); i++)
	{
		if (book_list.at(i) == book_title)
		{
			flag = true;
			break;
		}
	}
	return flag;
}//Search_Book_By_Title
void search_by_keyword(vector<string> book_list, string keyword)
{
	//Local Variables
	int count = 0;
	//Code
	for (int i = 0; i < book_list.size(); i++)
	{
		if (book_list.at(i).find(keyword) != string::npos)     //The npos means, no pos, which means the return value is "No matches". So, here we are saying if there is a match.
		{
			cout << "Book Title: " << book_list.at(i) << "." << endl;
			count++;
		}//If
	}
	cout << count << " Result(s)." << endl;
	return;
}//Search_By_Keyword
void delete_book(vector<string> &book_list, string book_title)
{
	//Local Variables

	//Code
	for (int i = 0; i < book_list.size(); i++)
	{
		if (book_list.at(i).compare(book_title) == 0)    //The == 0 is part of the function ".compare()" in the string library.
		{
			cout << "The book titled: " << book_list.at(i) << " has been deleted." << endl;
			book_list.erase(book_list.begin() + i);
		}//If
	}//For
	return;
}