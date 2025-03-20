#include <iostream>
using namespace std;


int factorial(int num);

int main()
{
	int numFactorial;
	int factorialResult;
	cout << "Tell me a number to find out the factorial of " << endl;
	cin >> numFactorial;

	factorialResult = factorial(numFactorial);

	cout << "The factorial of number " << numFactorial << " is: " << factorialResult << endl;


	return 0;
}

int factorial(int num)
{
	if (num > 1)
	{

		return num* factorial(num - 1);
	}
	return 1;
}