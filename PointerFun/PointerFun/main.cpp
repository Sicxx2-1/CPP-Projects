#include <iostream>
#include <string>
using namespace std;


int main()
{
	int myLovelyInteger = 150;
	int* somePtr = &myLovelyInteger;
	double myLovelyDouble = 3.14;
	double* anotherPtr = &myLovelyDouble;


	cout << "myLovelyInteger is originally: " << myLovelyInteger << endl;
	cout << "Pointer holds value: " << somePtr << endl;
	cout << "Pointer dereferenced: " << *somePtr << endl;
	
	*somePtr = 200;

	cout << "myLovelyInteger is now: " << myLovelyInteger << endl;
	

	cout << "myDouble is originally: " << myLovelyDouble << endl;
	cout << "The memory adress of it is:  " << anotherPtr << endl;
	cout << "With the value of: " << *anotherPtr << endl;



	return 0;
}