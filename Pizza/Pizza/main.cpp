#include <iostream>
#include <string>
#include <vector>
#include "Pizza.h"
using namespace std;


int main()
{
	Pizza myPizza("Liberazione", 79, 52);

	myPizza.addToppings("Burrata");
	myPizza.addToppings("Cilantro");
	myPizza.addToppings("Ham");
	myPizza.addToppings("Blood of the Ancients");

	cout << "Name: " << myPizza.getName() << endl;
	cout << "Diameter: " << myPizza.getDiameter() << " cm" << endl;
	cout << "Cost: " << myPizza.getCost() << " lei" << endl;
	cout << endl;
	myPizza.printToppings();


	return 0;
}