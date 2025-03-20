#include <iostream>
#include <string>
#include <vector>
#include "Pizza.h"
using namespace std;



Pizza::Pizza(string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
	toppings.push_back("Cheese");
}

void Pizza::addToppings(string topping)
{
	toppings.push_back(topping);
}

int Pizza::getCost() const
{
	return cost;
}

void Pizza::printToppings() const
{
	cout << "The toppings on the pizza are: " << endl;
	for (int i = 0; i < toppings.size(); i++)
	{
		cout << toppings[i] << endl;
	}
}

string Pizza::getName() const
{
	return name;
}

int Pizza::getDiameter() const
{
	return diameter;
}