#include <iostream>
#include <array>
using namespace std;

int sumArray(int array[]);

int main()
{
	const int ARRAY_SIZE = 10;
	int* myArray = new int[10];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter number for location " << (i + 1) << endl;
		cin >> myArray[i];
	}
	
	int totalSum = sumArray(myArray);
	cout << "The result is: " << totalSum; 

	return 0;
}

int sumArray(int array[])
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}

	return sum;
}



int sumArray(array<int, 10> theArray);

int main()
{
	array<int, 10> primaryArray{ 1,2,3,4,5,6,7,8,9,10 };
	int theResult = sumArray(primaryArray);
	cout << "The result is: " << theResult << endl;
	return 0;
}

int sumArray(array<int, 10> theArray)
{
	int sum = 0;

	for (int number : theArray)
	{
		sum += number;
	}
	return sum;
}