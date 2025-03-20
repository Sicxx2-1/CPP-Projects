#include <iostream>
#include <string>
#include "Laptop.h"
using namespace std;


void Laptop::setBrand(string brand)
{
	this->brand = brand;
}

void Laptop::setProcessor(string processor)
{
	this->processor = processor;
}

void Laptop::setRamSize(int ramSize)
{
	this->ramSize = ramSize;
}

string Laptop::getBrand() const
{
	return brand;
}

string Laptop::getProcessor() const
{
	return processor;
}

int Laptop::getRamSize() const
{
	return ramSize;
}

void Laptop::printLaptop() const
{
	cout << "The laptop is a " << brand << endl;
	cout << "The processor it has is: " << processor << endl;
	cout << "With a size of " << ramSize << " GB of RAM" << endl;
}

Laptop::Laptop()
{
	brand = "Unknown";
	processor = "Unknown";
	ramSize = 4;
}