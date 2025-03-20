#include <iostream>
using namespace std;

int main()
{

	const int ARRAY_SIZE = 10;
	int populateArray[ARRAY_SIZE];


	for (int i = 0; i < 10; i++)
	{
		populateArray[i] = i + 1;
	}

	for (auto index : populateArray)
	{
		cout << index << endl;
	}


	return 0;
}