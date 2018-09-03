//Chapter 10 Classes
//Hotel Management System
#include<iostream>
#include<string>
#include<vector>

using namespace std;


//GV
struct Date
{
	int month, day, year;
};

struct Customer
{
	string first_name, last_name, address, phone_number;
	Date check_in, check_out;
};

struct Hotel
{
	string name, address, phone_number;
	int rooms;
	vector<Customer> customer_list;
};


//Function Declarations
void menu();
void book_room(Hotel &);
void display_information(Hotel);
Hotel check_out_customer(string, string, Hotel);
void search_customer_booking(string, string, Hotel);


int main()
{
	//Local Variables
	Hotel hotel;
	int choice;
	string first, last;

	//Code
	hotel.name = "UALR Inn";
	hotel.address = "208 South University Avenue, Little Rock, Arkansas, 72204";
	hotel.rooms = 100;

	do {

		system("cls");

		//1. Show the menu.
		menu();

		//2. Ask the user to enter his/her choice.
		cout << "Enter your choice HERE => ";
		cin >> choice;
		cin.ignore();

		//3. Handle user's selection.
		switch (choice)
		{
		case 1:
		{
			//Book Room
			book_room(hotel);
			system("pause");
			break;
		}//Case 1
		case 2:
		{
			//Display Information
			display_information(hotel);
			system("pause");
			break;
		}//Case 2
		case 3:
		{
			//Check Out The Customer
			cout << endl << "Enter the first and last name for Check Out: ";
			cin >> first >> last;
			hotel = check_out_customer(first, last, hotel);
			system("pause");
			break;
		}//Case 3
		case 4:
		{
			//Search For A Customer Booking
			cout << endl << "To check if a customer has booked a room in the hotel, please enter first and last name: ";
			cin >> first >> last;
			cin.ignore();
			search_customer_booking(first, last, hotel);
			system("pause");
			break;
		}//Case 4
		case 5:
		{
			//Exit The Program
			system("exit");
			break;
		}//Case 5
		default:
		{
			cout << endl << "ERROR: Please select 1-5." << endl << endl;
			system("pause");
		}
		}//Switch

	} while (choice != 5);

	return 0;
}//Main


 //Function Deffinitions
void menu()
{
	//Local Variables

	//Code
	cout << "                          Hotel Management System" << endl;
	cout << "                                   MENU:" << endl << endl;
	cout << "                          1. Book Room" << endl;
	cout << "                          2. Display Customer's Info" << endl;
	cout << "                          3. Check Out" << endl;
	cout << "                          4. Search Customer" << endl;
	cout << "                          5. EXIT!" << endl << endl;
	return;
}//Menu

void book_room(Hotel &hotel)
{
	//Local Variables
	Customer customer;
	char sp;

	//Code
	cout << endl << "Enter First Name: ";
	cin >> customer.first_name;

	cout << "Enter Last Name: ";
	cin >> customer.last_name;
	cin.ignore();

	cout << "Enter Address: ";
	getline(cin, customer.address);

	cout << "Enter Phone Number: ";
	cin >> customer.phone_number;

	cout << "Check in date (mm/dd/yy): ";
	cin >> customer.check_in.month >> sp >> customer.check_in.day >> sp >> customer.check_in.year;

	cout << "Check out date (mm/dd/yy): ";
	cin >> customer.check_out.month >> sp >> customer.check_out.day >> sp >> customer.check_out.year;

	cout << endl;

	hotel.customer_list.push_back(customer);
	hotel.rooms--;
	return;
}//Book_Room

void display_information(Hotel hotel)
{
	//Local Variables

	//Code
	cout << endl << "Welcome to the " << hotel.name << "." << endl;
	cout << "We are located at " << hotel.address << "." << endl;
	cout << "Rooms available: " << hotel.rooms << "." << endl << endl;
	for (int i = 0; i < hotel.customer_list.size(); i++)
	{
		cout << "Customer Name: " << hotel.customer_list.at(i).first_name << " " << hotel.customer_list.at(i).last_name << "." << endl;
		cout << "Customer Address: " << hotel.customer_list.at(i).address << "." << endl;
		cout << "Customer Phone Number: " << hotel.customer_list.at(i).phone_number << "." << endl;
		cout << "Customer Check in date: " << hotel.customer_list.at(i).check_in.month << "/" << hotel.customer_list.at(i).check_in.day << "/" << hotel.customer_list.at(i).check_in.year << "." << endl;
		cout << "Customer Check out date: " << hotel.customer_list.at(i).check_out.month << "/" << hotel.customer_list.at(i).check_out.day << "/" << hotel.customer_list.at(i).check_out.year << "." << endl;
		cout << endl;
	}//For
	return;
}//Display_Info

Hotel check_out_customer(string first_name, string last_name, Hotel hotel)
{
	//Local Variables
	bool checked_out = false;

	//Code
	cout << endl;
	for (int i = 0; i < hotel.customer_list.size(); i++)
	{
		if (first_name == hotel.customer_list.at(i).first_name && last_name == hotel.customer_list.at(i).last_name)
		{
			cout << "Customer " << hotel.customer_list.at(i).first_name << " " << hotel.customer_list.at(i).last_name << " has been checked out." << endl << endl;
			hotel.customer_list.erase(hotel.customer_list.begin() + i);
			hotel.rooms++;
			checked_out = true;
			break;
		}//If
	}//For
	if (checked_out != true)
	{
		cout << "ERROR: " << first_name << " " << last_name << " was never checked in to the UALR Inn! You cannot Check Out a guest that has not booked a room!" << endl << endl;
	}//If
	cout << "Rooms Available: " << hotel.rooms << "." << endl << endl;
	return hotel;
}//Check_Out_Customer

void search_customer_booking(string first_name, string last_name, Hotel hotel)
{
	//Local Variables
	bool booked_a_room = false;

	//Code
	cout << endl;
	for (int i = 0; i < hotel.customer_list.size(); i++)
	{
		if (first_name == hotel.customer_list.at(i).first_name && last_name == hotel.customer_list.at(i).last_name)
		{
			booked_a_room = true;
		}//If
	}//For
	if (booked_a_room == true)
	{
		cout << first_name << " " << last_name << " has booked a room!" << endl << endl;
	}//If
	else
	{
		cout << first_name << " " << last_name << " has NOT booked a room!" << endl << endl;
	}//Else
	return;
}//Seach_Customer_Booking