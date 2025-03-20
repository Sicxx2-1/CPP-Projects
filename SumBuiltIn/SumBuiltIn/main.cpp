#include <iostream>
using namespace std;

int sumArray(int array[], int size);
int main()
{
	int myArray[]{ 1,2,3,4,5 };
	int result = sumArray(myArray, 5);
	cout << "The result is: " << result << endl;
	return 0;
}


int sumArray(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum;
}