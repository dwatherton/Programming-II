#include"Account.h"
using namespace bank;

//Global Variables

//Function Declarations

int main()
{
	//Local Variables
	Account my_account;
	Account your_account(1234, 1000.00);

	//Code
	my_account.set_balance(2000.00);
	my_account.print();
	cout << endl;
	my_account.deposit(500.00);
	my_account.print();
	cout << endl;
	my_account.deposit(200.00);

	your_account.print();
	cout << endl;
	your_account.withdraw(400.00);
	your_account.deposit(200.00);
	your_account.print();
	cout << endl;

	system("pause");
	return 0;
}//Main

 //Fuction Definitions