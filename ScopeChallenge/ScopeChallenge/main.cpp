#include <iostream>
using namespace std;


void modifyGlobal();

int counter = 0;

int main()
{
	cout << "The value of the global counter before the loop is " << counter << endl;

	for (int i = 0; i < 100; i++)
	{
		modifyGlobal();
		cout << "Current counter number is " << counter << endl;
	}

	cout << "The value of the global counter after the loop is " << counter << endl;

	return 0;
}


void modifyGlobal()
{
	counter++;
}