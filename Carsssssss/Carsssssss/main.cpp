#include <iostream>
#include <string>
using namespace std;


class Car
{
public:
	void setBrand(string brand)
	{
		this->brand = brand;
	}

	void setModel(string model)
	{
		this->model = model;
	}

	void setYear(int year)
	{
		this->year = year;
	}


	string getBrand() const
	{
		return brand;
	}

	string getModel() const
	{
		return model;
	}

	int getYear() const
	{
		return year;
	}


private:
	string brand;
	string model;
	int year;
};

void printCarDetails(const Car& car);

int main()
{

	Car renault;
	Car volkswagen;

	renault.setBrand("Renault");
	renault.setModel("Megane");
	renault.setYear(2004);

	volkswagen.setBrand("Volkswagen");
	volkswagen.setModel("Golf V Variant");
	volkswagen.setYear(2007);

	printCarDetails(renault);
	cout << endl << endl;
	printCarDetails(volkswagen);


}

void printCarDetails(const Car& car)
{
	cout << "The car brand is: " << car.getBrand() << endl;
	cout << "The model is " << car.getModel() << endl;
	cout << "Fabricated in the year: " << car.getYear();
}