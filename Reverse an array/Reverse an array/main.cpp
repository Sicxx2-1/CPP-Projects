#include <iostream>
using namespace std;

void reverseArray(int* arr, int size);

int main()
{
	int ARR_SIZE = 0;
	cout << "Tell me how many numbers: " << endl;
	cin >> ARR_SIZE;

	int* arrPtr = new int[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << "Enter number " << i + 1 << endl;
		cin >> arrPtr[i];
	}

	reverseArray(arrPtr, ARR_SIZE);

	delete[] arrPtr;

	return 0;
}


void reverseArray(int* arr, int size)
{

	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}
}