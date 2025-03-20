#ifndef EXPENSE_MANAGER_H
#define EXPENSE_MANAGER_H
#include  "Expense.h"
#include <vector>
#include <fstream>
using namespace std;


class ExpenseManager
{
public:
	void addExpense(const Expense& expense);
	void showAllExpenses() const;
	void saveExpensesToFile() const;
private: 
	vector<Expense> expenses;
};




#endif
