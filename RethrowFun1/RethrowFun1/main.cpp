#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void processPositive(int num);
void doSomething(int num);

int main()
{
	int input;

	try
	{
		cout << "Enter a number to process: " << endl;
		cin >> input;
		doSomething(input);
		cout << "Yay! Main was able to completely process the num!" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "Main says there is an error!" << endl;
		cout << err.what() << endl;
	}
	catch (const out_of_range& err)
	{
		cout << "main says the number is too big!" << endl;
		cout << err.what() << endl;
	}

	return 0;
}


void processPositive(int num)
{
	cout << "Welcome to the positive integer processor" << endl;
	if (num >= 0)
	{
		cout << "Good job! You passed in a positive num to processPositive!" << endl;
	}
	else
	{
		throw invalid_argument("Negative argument passed in!");
	}
	if (num <= 100)
	{
		cout << "Good job! You passed in a valid num in processPositive!" << endl;
	}
	else
	{
		throw out_of_range("Number cannot be greater than 100!");
	}
}


void doSomething(int num)
{
	try
	{
		processPositive(num);
		cout << "Yay doSomething could process that num!" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "doSomething there is a problem!" << endl;
		throw;  // Rethrow
	}
	catch (const out_of_range& err)
	{
		cout << "doSomething says the number is too big!" << endl;
		throw;
	}

}