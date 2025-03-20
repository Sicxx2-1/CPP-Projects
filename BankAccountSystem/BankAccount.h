#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class BankAccount
{
public:
	BankAccount(string accountHolderName, double balance);
	~BankAccount();
	void deposit(double amount);
	void withdraw(double amount);
	double displayBalance() const;
	string getName() const;
private:
	string accountHolderName;
	double balance;
};


#endif

