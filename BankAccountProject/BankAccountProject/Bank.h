#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
	BankAccount(string owner);
	BankAccount(string owner, int balance);
	void deposit(int amount);
	void withdraw(int amount);
	string getOwner() const;
	int getBalance() const;

	
private:
	string owner;
	int balance;
};




#endif