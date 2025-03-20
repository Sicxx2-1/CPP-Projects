/*
	Arithmetic Operatos
	+ addition
	- subtraction
	* multiplication
	/ division operator
	% modulus operator (modulo)
*/


#include <iostream>
using namespace std;

int main () 
{
	int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;


	result += 15; // Result = result + 15

	int myInt = 5;
	myInt--;
	


	cout << "Sum = " << sum << endl;
	cout << "Difference = "<< difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " <<remainder << endl;
	cout << "Result = " <<result << endl;
	cout << myInt << endl;
	return 0;
}