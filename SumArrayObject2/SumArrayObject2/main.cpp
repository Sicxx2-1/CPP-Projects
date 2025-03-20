#include <iostream>
#include <array>
using namespace std;


void sumArray(array<int, 10> theArray,int& sum);

int main()
{
	int totalSum = 0;
	array<int, 10> myArray{ 1,2,3,4,5,6,7,8,9,10 };
	sumArray(myArray, totalSum);


	return 0;
}


void sumArray(array<int, 10> theArray, int& sum)
{
	sum = 0;
	
	for (int numbers : theArray)
	{
		sum += numbers;
	}

	cout << "The result is: " << sum << endl;
}