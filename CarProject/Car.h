#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Car
{
public:
	Car(string color, int numDoors);
	string getColor() const;
	int getNumDoors() const;

private:
	string color;
	int numDoors;
};


#endif
