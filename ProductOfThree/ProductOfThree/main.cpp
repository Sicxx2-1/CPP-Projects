#include <iostream>
using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{
	int number1, number2, number3;

	cout << "Tell me the first number you want to multiply" << endl;
	cin >> number1;
	cout << "Tell me the second number you want to add to the multiplication" << endl;
	cin >> number2;
	cout << "Tell me the third number you want to add to the multiplication" << endl;
	cin >> number3;

	int total = multiply(number1, number2, number3);

	cout << "The result is: " << total << endl;


	return 0;
}

int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}