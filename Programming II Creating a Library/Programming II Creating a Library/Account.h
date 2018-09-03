//Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
using namespace std;


namespace bank
{
	class Account
	{
	private:
		int account_no, no_of_transactions;
		double balance;

	public:
		Account();
		Account(int, double);
		int get_account();
		double get_balance();
		void set_balance(double amount);
		void deposit(double amount);
		void withdraw(double amount);
		void print();
	};//Account (Class)
}//Bank (Namespace)

#endif