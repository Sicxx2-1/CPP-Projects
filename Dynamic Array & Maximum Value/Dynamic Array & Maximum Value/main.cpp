#include <iostream>
using namespace std;

void findMax(int* arr, int size);

int main()
{
	int USER_SIZE = 0;
	cout << "How many numbers should the array contain?" << endl;
	cin >> USER_SIZE; 
	int* arrayPtr = new int[USER_SIZE];
	
	for (int i = 0; i < USER_SIZE; i++)
	{
		int choice = 0;
		cout << "Enter number " << i + 1 << endl;
		cin >> choice;
		arrayPtr[i] = choice;
	}

	findMax(arrayPtr, USER_SIZE);
	
	delete[] arrayPtr;
	return 0;
}

void findMax(int* arr, int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "The max number in the given array is: " << max << endl;
}