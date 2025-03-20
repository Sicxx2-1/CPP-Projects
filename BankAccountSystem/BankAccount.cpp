#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;


BankAccount::BankAccount(string accountHolderName, double balance)
{
	this->accountHolderName = accountHolderName;
	if (balance >= 0)
	{
		this->balance = balance;
	}
	else
	{
		cout << "Invalid amount for balance, will set to default 0" << endl;
		this->balance = 0;
	}
}

void BankAccount::deposit(double amount)
{
	balance += amount;
}

void BankAccount::withdraw(double amount)
{
	if (amount <= balance)
	{
		balance -= amount;
	}
	else {
		cout << "Sorry, amount you are trying to withdraw exceeds the available balance. \t Please try again!." << endl;
	}
}

double BankAccount::displayBalance() const
{
	return balance;
}

string BankAccount::getName() const
{
	return accountHolderName;
}

BankAccount::~BankAccount()
{
	cout << "Account of " << accountHolderName << " is now closed!" << endl;
}