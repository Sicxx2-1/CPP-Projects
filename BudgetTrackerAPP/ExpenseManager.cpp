#include "ExpenseManager.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;


void ExpenseManager::addExpense(const Expense& expense)
{
	expenses.push_back(expense);
}

void ExpenseManager::showAllExpenses() const
{
	for (const auto& expense : expenses)
	{
		expense.printExpense();
		cout << "---------------" << endl;
	}
}

void ExpenseManager::saveExpensesToFile() const
{
	ofstream file;
	file.open("expenses.txt");
	if (!file)
	{
		cout << "Error: Unable to save expenses!" << endl;
		return;
	}

	for (const auto& expense : expenses)
	{
		file << expense.getCategory()
			<< expense.getAmount()
			<< expense.getDate() << endl;
	}

	file.close();
	cout << "Expenses saved successfully" << endl;
}
