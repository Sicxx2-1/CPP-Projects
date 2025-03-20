#include <iostream>
#include <string>
#include <vector>
#include "BankAccount.h"
using namespace std;


int main()
{
	// For the sake of logic and usability of this projects I will go with the maximum of 3 accounts that can be created first
	int numOfAccs;
	cout << "Hello! Welcoming to our banking systems! How many accounts would you like to create first? \n\t Remember the maximum number you can is 3" << endl;
	cin >> numOfAccs;
	vector<BankAccount*> accounts{};

	while (numOfAccs <= 0 || numOfAccs > 3) {
		cout << "Sorry, the number threw an error...Please try again" << endl;
		cin >> numOfAccs;
		continue;
	}
	if (numOfAccs > 0 && numOfAccs <= 3) {
		for (int i = 0; i < numOfAccs; i++)
		{
			double tempBalance;
			string tempName;
			cout << "Specify name and balance for account no." << (i + 1) << endl;
			cout << "Name:" << endl;
			cin.ignore();
			getline(cin, tempName);
			cout << "Balance" << endl;
			cin >> tempBalance;
			accounts.push_back(new BankAccount(tempName, tempBalance));
		}
	}

	cout << "Great! Accounts have been created!" << endl;
	cout << endl << endl;
	
	int userChoice;
	cout << "Welcome back! What operation would you like to do: " << endl;
	cout << "\t 1 - Create a new bank account." << endl;
	cout << "\t 2 - Deposit money into an account." << endl;
	cout << "\t 3 - Withdraw money." << endl;
	cout << "\t 4 - Check balance." << endl;
	cout << "\t 0 - Exit the program." << endl;
	cin >> userChoice;

	while (userChoice != 0)
	{
		if (userChoice == 1) // Dynamically creating a new account system
		{
			string tempName;
			double tempBalance;
			cout << "Great! Let's open a new bank account!" << endl;
			cout << "Enter the name" << endl;
			cin.ignore();
			getline(cin, tempName);
			cout << "Please specify balance: " << endl;
			cin >> tempBalance;
			accounts.push_back(new BankAccount(tempName, tempBalance));
		}
		else if (userChoice == 2) // Deposit system
		{
			int tempChoice;
			cout << "Great! Here is the list of available accounts." << endl;
			for (int i = 0; i < accounts.size(); i++)
			{
				cout << "\t" << i << " - " << accounts[i]->getName() << endl;
			}
			cout << "Which account would you like to access: " << endl;
			cin >> tempChoice;
			if (tempChoice >= 0 && tempChoice < accounts.size())
			{
				double tempAmount;
				cout << "How much money you want to deposit?: " << endl;
				cin >> tempAmount;
				accounts[tempChoice]->deposit(tempAmount);
				cout << "Your new balance is: " << accounts[tempChoice]->displayBalance() << "$" << endl;
			}
			cout << "Thank you for your deposit!" << endl;
		}
		else if (userChoice == 3) // Withdrawal system
		{
			int tempChoice;
			cout << "Great! Here is the list of available accounts." << endl;
			for (int i = 0; i < accounts.size(); i++)
			{
				cout << "\t" << i << " - " << accounts[i]->getName() << endl;
			}
			cout << "Which account would you like to access: " << endl;
			cin >> tempChoice;
			if (tempChoice >= 0 && tempChoice < accounts.size())
			{
				double tempAmount;
				cout << "How much money you want to withdraw?: " << endl;
				cin >> tempAmount;
				while (tempAmount > accounts[tempChoice]->displayBalance())
				{
					cout << "The amount you are trying to withdraw exceeds the current balance. Please try again" << endl;
					cin >> tempAmount;
					continue;
				}
				if (tempAmount <= accounts[tempChoice]->displayBalance())
				{
					accounts[tempChoice]->withdraw(tempAmount);
					cout << "Your new balance is: " << accounts[tempChoice]->displayBalance() << "$" << endl;
				}
				
			}
			cout << "Thank you for your withdrawal! Have a nice day!" << endl;
		}
		else if (userChoice == 4) // Checking balance system
		{
			int tempChoice;
			cout << "Great! Here is the list of available accounts." << endl;
			for (int i = 0; i < accounts.size(); i++)
			{
				cout << "\t" << i << " - " << accounts[i]->getName() << endl;
			}
			cout << "Which account would you like to access: " << endl;
			cin >> tempChoice;
			if (tempChoice >= 0 && tempChoice < accounts.size())
			{
				cout << "Your current balance is: " << accounts[tempChoice]->displayBalance() << "$" << endl;
			}
		}
		cout << "\t 1 - Create a new bank account." << endl;
		cout << "\t 2 - Deposit money into an account." << endl;
		cout << "\t 3 - Withdraw money." << endl;
		cout << "\t 4 - Check balance." << endl;
		cout << "\t 0 - Exit the program." << endl;
		cin >> userChoice;
	}

	//Freeing the memory
	for (BankAccount* account : accounts)
	{
		delete account;
	}

	return 0;
}