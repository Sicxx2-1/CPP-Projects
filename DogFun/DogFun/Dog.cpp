#include <iostream>
#include <string>
#include <stdexcept>
#include "Dog.h"
using namespace std;


Dog::Dog(string breed)
{
	if (breed != "Poodle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Poodle? That's not a real dog!");
	}
}

string Dog::getBreed() const noexcept
{
	return breed;
}