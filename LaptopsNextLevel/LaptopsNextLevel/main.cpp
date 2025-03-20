#include <iostream>
#include <string>
#include "Laptop.h"
using namespace std;



int main()
{
	Laptop myLaptop;
	Laptop genericLaptop;

	myLaptop.setBrand("Asus TUF Gaming");
	myLaptop.setProcessor("Ryzen 5 5500");
	myLaptop.setRamSize(16);

	myLaptop.printLaptop();
	cout << endl << endl;
	genericLaptop.printLaptop();

	return 0;
}