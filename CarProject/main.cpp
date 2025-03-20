#include <iostream>
#include <string>
#include <memory>
#include "Car.h"
using namespace std;


int main()
{

	unique_ptr<Car> myCar = make_unique<Car>("Red", 4);
	cout << "Color of your car: " << myCar->getColor() << endl;
	cout << "Number of doors: " << myCar->getNumDoors() << endl;
	return 0;
}