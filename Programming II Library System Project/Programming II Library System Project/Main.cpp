#include"Library.h"
using namespace library;

//Global Variables

//Function Definitions
void main_menu();


int main() {
	//Local Variables
	int choice;
	

	//Code
	system("cls");
	main_menu();
	cout << "Enter your choice here: => ";
	cin >> choice;
	cin.ignore();
do {
	switch (choice) {
	case 1: {
		cout << "hi";
		system("pause");
		break;
		}
	case 2: {
		//Case 2
		break;
	}
	case 3: {
		//Case 3
		break;
	}
	case 4: {
		//Case 4
		break;
	}
	case 5: {
		//Case 5
		break;
	}
	case 6: {
		//Case 6
		break;
	}
	case 7: {
		//Case 7
		break;
	}
	case 8: {
		//Case 8
		break;
	}
	case 9: {
		//Case 9
		break;
	}
	case 10: {
		//Case 10
		break;
	}
	case 11: {
		//Case 11
		break;
	}

	case 12: {
		system("exit");
		break;
	}

	default: {
		cout << "ERROR! Please enter 1-12..." << endl;
		break;
	}

	}//Switch
} while(choice != 12);


Person new_person;
Author new_author;
Book new_book;
Customer new_customer;
Bill new_bill;
Library new_library;

	system("pause");
	return 0;
}//Main



//Function Declarations
void main_menu() {
	cout << "			Welcome to the Library System!" << endl;
	cout << "				1. Placeholder" << endl;
	cout << "				2. Placeholder" << endl;
	cout << "				3. Placeholder" << endl;
	cout << "				4. Placeholder" << endl;
	cout << "				5. Placeholder" << endl;
	cout << "				6. Placeholder" << endl;
	cout << "				7. Placeholder" << endl;
	cout << "				8. Placeholder" << endl;
	cout << "				9. Placeholder" << endl;
	cout << "				10. Placeholder" << endl;
	cout << "				11. Placeholder" << endl;
	cout << "				12. Placeholder" << endl;
	return;
}