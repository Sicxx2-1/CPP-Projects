#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;



int main()
{
	//Animal myCat("Pisulica", 10.2);  Does not work because of the Pure Virtual Function! 

	/*string noise = myCat.makeNoise();
	double myCatWeight = myCat.getWeight();
	string name = myCat.getName();

	cout << "Your animal name is: " << name << endl;
	cout << "It weighs: " << myCatWeight << " kg" << endl;
	cout << "The noise it makes is: " << noise << endl;*/
	
	Dog doggie("Goofy", 20, "Golden Retriever");

	cout << "Dog's name: " << doggie.getName() << endl;
	cout << "Dog's weight: " << doggie.getWeight() << endl;
	cout << "Dog's noise: " << doggie.makeNoise() << endl;
	doggie.digHole();
	doggie.chaseCat();
	cout << endl << endl << endl;
	Animal* dogPtr = new Dog("Fido", 15, "Greyhound");
	cout << "Make Noise?: " << dogPtr->makeNoise() << endl;
	cout << "What do you eat?: " << dogPtr->eat() << endl;


	Animal* catPtr = new Cat("Pisulica", 12);

	cout << endl << endl;
	cout << "Noise: " << catPtr->makeNoise() << endl;
	cout << "What you eat: " << catPtr->eat() << endl;
	((Cat*)catPtr)->chaseMouse();


	delete dogPtr;
	delete catPtr;
	dogPtr = nullptr;
	catPtr = nullptr;
	return 0;
}