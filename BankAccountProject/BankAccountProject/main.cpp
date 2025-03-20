#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;


int main()
{
	BankAccount myAccount("Andrei Pumn-Da-Zale", 5500);
	BankAccount invalidPerson("Toti managerii de pe lume", -1000);
	BankAccount brokeNiqqa("Some broke ass niqqa");

	brokeNiqqa.deposit(500);
	cout << "The owner is " << brokeNiqqa.getOwner() << endl;
	cout << "The balance is: " << brokeNiqqa.getBalance() << endl;
	brokeNiqqa.withdraw(1000);
	cout << endl;

	cout << "Mega Owner is: " << myAccount.getOwner() << endl;
	cout << "Current balance is: " << myAccount.getBalance() << endl;
	myAccount.deposit(99999);
	cout << "New balance is: " << myAccount.getBalance() << endl;
	myAccount.withdraw(105000);
	cout << "Remaining balance is: " << myAccount.getBalance() << endl;



	return 0;
}