#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;


BankAccount::BankAccount(string owner)
{ 
	this->owner = owner;
	this->balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
	if (balance <= 0)
	{
		cout << "Value you entered is invalid please try again!" << endl;
	}
	else {
		this->owner = owner;
		this->balance = balance;
	}
}

string BankAccount::getOwner() const
{
	return owner;
}

int BankAccount::getBalance() const
{
	return balance;
}


void BankAccount::deposit(int amount)
{
	if (amount <= 0)
	{
		cout << "Value you entered is invalid please try again!" << endl;
	}
	else
	{
		balance += amount;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > balance)
	{
		cout << "You don't have enough money for this transaction. Please try again!" << endl;
	}
	else
	{
		balance -= amount;
	}


}