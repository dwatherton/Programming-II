//Account.cpp
#include"Account.h"
using namespace bank;

Account::Account() :account_no(0), balance(0.0), no_of_transactions(0)
{

}

Account::Account(int account_no, double balance) : no_of_transactions(0)
{
	this->account_no = account_no;
	this->balance = balance;
}

int Account::get_account()
{
	return account_no;
}

double Account::get_balance()
{
	return balance;
}

void Account::set_balance(double amount)
{
	balance = amount;
	return;
}

void Account::deposit(double amount)
{
	balance += amount;
	no_of_transactions++;
	return;
}

void Account::withdraw(double amount)
{
	if (balance >= amount)
	{
		balance -= amount;
		no_of_transactions++;
	}
	else
	{
		cout << "ERROR: your balance is " << balance << " is less than " << amount << "." << endl;
		system("exit");
	}
	return;
}

void Account::print()
{
	cout << "Account Number: " << account_no << "." << endl;
	cout << "Balance: " << balance << "." << endl;
	cout << "Number of Transactions: " << no_of_transactions << "." << endl;
}