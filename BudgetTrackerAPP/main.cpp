#include <iostream>
#include <string>
#include <vector>
#include "Expense.h"
#include "ExpenseManager.h"
using namespace std;


int main()
{
	ExpenseManager manager;

	int choice;
	while (true)
	{
		cout << "Expense Tracker Menu: " << endl;
		cout << "\t 1 - Add expense" << endl;
		cout << "\t 2 - Show all expenses" << endl;
		cout << "\t 3 - Exit" << endl;
		cin >> choice;
		cin.ignore();


		if (choice == 1)
		{
			string tempCat;
			string tempDate;
			double tempAmount;

			cout << "Enter category: " << endl;
			getline(cin, tempCat);
			cout << "Enter amount: " << endl;
			cin >> tempAmount;
			cout << "Enter the date: YYYY-MM-DD" << endl;
			cin.ignore();
			getline(cin, tempDate);
			Expense expense(tempCat, tempAmount, tempDate);
			manager.addExpense(expense);
			manager.saveExpensesToFile();
		}
		else if (choice == 2)
		{
			manager.showAllExpenses();
		}
		else if (choice == 3)
		{
			cout << "Exiting the program" << endl;
			break;
		}
		else
		{
			cout << "Invalid choice. Please try again!" << endl;
		}


	}

	return 0;
}