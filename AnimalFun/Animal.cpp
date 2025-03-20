#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;


Animal::Animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}

void Animal::setName(string name)
{
	this->name = name;
}

string Animal::getName() const
{
	return name;
}

void Animal::setWeight(double weight)
{
	this->weight = weight;
}

double Animal::getWeight() const
{
	return weight;
}
