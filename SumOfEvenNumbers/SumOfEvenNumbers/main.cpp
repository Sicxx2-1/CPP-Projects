#include <iostream>
using namespace std;

int sumEvenNumbers(int* arr, int size);

int main()
{
	int ARR_SIZE = 0;
	cout << "Tell me how many numbers " << endl;
	cin >> ARR_SIZE;

	int* arrPtr = new int[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << "Enter number " << i + 1 << endl;
		cin >> arrPtr[i];
	}

	int sumEvens = sumEvenNumbers(arrPtr, ARR_SIZE);

	cout << "The sum of even numbers is: " << sumEvens << endl;

	delete[] arrPtr;

	return 0;
}

int sumEvenNumbers(int* arr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}

	return sum;
}