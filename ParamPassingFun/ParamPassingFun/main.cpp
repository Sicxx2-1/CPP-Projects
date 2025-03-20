#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanges2(int& someNum);

void threeTimesN(int input, int& output);


int main()
{
	int myNumber = 20;
	int numberToMultiply;
	cout << "Write a number to be multiplied to 3" << endl;
	cin >> numberToMultiply;
	int multipliedNumber;

	cout << "Before valueChanged1 call, my number is: " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChange1 call, my number is: " << myNumber << endl;
	cout << endl << endl;

	cout << "My number is currently: " << myNumber << endl;
	valueChanges2(myNumber);
	cout << endl;
	cout << "After valueChanged2 call, my number is: " << myNumber << endl;

	cout << endl;
	threeTimesN(numberToMultiply, multipliedNumber);
	cout << "The number you input multiplied by 3 is equal to: " << multipliedNumber << endl;
	


	return 0;
}


void valueChanged1(int someNum)
{
	someNum = 100;
}

void valueChanges2(int& someNum)
{
	someNum = 100;
	cout << "Inside valueChanged2 function, someNum is: " << someNum;
}

void threeTimesN(int input, int& output)
{
	output = input * 3;
}