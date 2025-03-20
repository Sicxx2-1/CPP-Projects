#include <iostream>
using namespace std;


int main()
{
	int userSize;
	cout << "Tell me how big you want your array to be: " << endl;
	cin >> userSize;

	int* myArray = new int[userSize];


	for (int i = 0; i < userSize; i++)
	{
		myArray[i] = i + 1;
	}


	for (int i = 0; i < userSize; i++)
	{
		cout << myArray[i] << endl;
	}

	delete[] myArray;


	return 0;
}