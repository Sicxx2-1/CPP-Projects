#include <iostream>
#include <string>
#include <stdexcept>
#include "Dog.h"
using namespace std;


int main()
{

	try
	{
		Dog dog1("Terrier");
		Dog dog2("Poodle");
		Dog dog3("Boxer");
		Dog dog4("Cane Corso");


		cout << dog1.getBreed() << endl;
		cout << dog2.getBreed() << endl;
		cout << dog3.getBreed() << endl;
		cout << dog4.getBreed() << endl;
	}
	catch(const runtime_error& err)
	{
		cout << err.what() << endl;
	}


	return 0;
}