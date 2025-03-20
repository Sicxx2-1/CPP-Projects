#include <iostream>
#include <string>
using namespace std;


class Laptop
{
public:


	Laptop()
	{
		brand = "Unknown";
		processor = "Unknown";
		ramSize = 4;
	}

	void setBrand(string brand)
	{
		this->brand = brand;
	}
	void setProcessor(string processor)
	{
		this->processor = processor;
	}
	void setRamSize(int ramSize)
	{
		this->ramSize = ramSize;
	}


	string getBrand() const
	{
		return brand;
	}

	string getProccesor() const
	{
		return processor;
	}

	int getRamSize() const
	{
		return ramSize;
	}


private: 
	string brand;
	string processor;
	int ramSize;
};


void printLaptopDetails(const Laptop& laptop);

int main()
{

	Laptop defaultLaptop;
	Laptop myLaptop;

	myLaptop.setBrand("Asus TUF Gaming");
	myLaptop.setProcessor("Ryzen 5 5500");
	myLaptop.setRamSize(16);

	printLaptopDetails(defaultLaptop);
	cout << endl << endl;
	printLaptopDetails(myLaptop);

	return 0;
}


void printLaptopDetails(const Laptop& laptop)
{

	cout << "The laptop is " << laptop.getBrand() << endl;
	cout << "The processor it has is " << laptop.getProccesor() << endl;
	cout << "The ram size of it is " << laptop.getRamSize() << " GB" << endl;

}