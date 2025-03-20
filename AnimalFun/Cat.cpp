#include "Cat.h"
#include <string>
#include <iostream>
using namespace std;


Cat::Cat(string name, double weight) : Animal(name, weight)
{

}

string Cat::makeNoise() const
{
	return "meow meow!";
}

string Cat::eat() const
{
	return "Tasty kitty food!";
}

void Cat::chaseMouse() const
{
	cout << "I'm chasing a mouse!" << endl;
}