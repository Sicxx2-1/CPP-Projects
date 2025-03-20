#include <iostream>
#include <array>
using namespace std;


int sum(int a[], int size);

int main()
{
	int size;
	cout << "How many numbers do you want to sum?" << endl;
	cin >> size;
	int sumOfNums;
	int* array = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter number " << (i + 1) << endl;
		cin >> array[i];
	}
	
	
	sumOfNums = sum(array, size);

	cout << "Sum of nums is: " << sumOfNums << endl;

	return 0;
}


int sum(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}

	return sum;
}