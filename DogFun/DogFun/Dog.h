#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class Dog
{
public:
	Dog(string breed);
	string getBreed() const noexcept;
private:
	string breed;
};

#endif