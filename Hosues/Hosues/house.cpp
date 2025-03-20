#include "house.h"
#include <iostream>
using namespace std;
void House::setNumStories(int numStories)
{
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
	this->numWindows = numWindows;
}

void House::setColor(string color)
{
	this->color = color;
}

void House::printHouse() const
{
	cout << "The house is " << color << endl;
	cout << "It has " << numStories << " stories" << endl;
	cout << "And " << numWindows << " windows" << endl;
}

int House::getNumStories() const
{
	return numStories;
}

int House::getNumWindows() const
{
	return numWindows;
}

string House::getColor() const
{
	return color;
}

House::House(int windows, int stories, string color)
{
	this->numWindows= windows;
	this->numStories= stories;
	this->color = color;
}

House::~House()
{
	cout << "House got destroyed" << endl;
}