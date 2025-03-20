#include <iostream>
using namespace std; 


int main()
{
	int ARR_SIZE;
	int average = 0;
	int sum = 0;
	cout << "How many numbers?" << endl;
	cin >> ARR_SIZE;

	int* myArray = new int[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++)
	{
		int choice;
		cout << "Enter number " << i + 1 << endl;
		cin >> choice;
		myArray[i] = choice;
		sum += choice;
	}

	average = sum / ARR_SIZE;

	cout << "Average is: " << average << endl;

	delete[] myArray;
	return 0;
}