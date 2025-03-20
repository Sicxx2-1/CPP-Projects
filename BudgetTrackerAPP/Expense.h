#ifndef EXPENSE_H
#define EXPENSE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Expense
{
public:
	Expense(string category, double amount, string date);
	void printExpense() const;
	string getCategory() const;
	double getAmount() const;
	string getDate() const;
private:
	string category;
	double amount;
	string date;
};


#endif
