#include <iostream>
#include <string>

using namespace std;

int main()
{
	string names[4] = { "Bob", "Sally", "John", "Ed" };

	const int ARRAY_SIZE = 5;
	int myArray[ARRAY_SIZE];

	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;


	for (auto name : names)
	{
		cout << name << endl;
	}



	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << myArray[i] << endl;
	}

	 
	for (int i = 0; i < 4;i++)
	{
		cout << names[i] << endl;
	}
	return 0;
}