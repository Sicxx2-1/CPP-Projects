#include "Expense.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;



Expense::Expense(string category, double amount, string date)
{
	this->category = category;
	this->amount = amount;
	this->date = date;
}

void Expense::printExpense() const
{
	cout << "Your expenses:" << endl;
	cout << "Category: " << category << endl;
	cout << "Amount: " << amount << endl;
	cout << "Date: " << date << endl;
}


string Expense::getCategory() const
{
	return category;
}

double Expense::getAmount() const
{
	return amount;
}

string Expense::getDate() const
{
	return date;
}