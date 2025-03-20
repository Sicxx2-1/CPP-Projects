#ifndef LAPTOP_H
#define LAPTOP_H

#include <iostream>
#include <string>
using namespace std;

class Laptop
{

public:
	Laptop();
	void setBrand(string brand);
	void setProcessor(string processor);
	void setRamSize(int ramSize);
	string getBrand() const;
	string getProcessor() const;
	int getRamSize() const;
	void printLaptop() const;




private: 
	string brand;
	string processor;
	int ramSize;
};

#endif