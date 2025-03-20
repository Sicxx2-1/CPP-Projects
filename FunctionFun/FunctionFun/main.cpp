#include <iostream>
using namespace std;

void printSomething();
void printMyName();


int main()
{
	printSomething();
	printMyName();

	return 0;
}

void printSomething()
{
	cout << "Hey! Look I am right here!" << endl;
}

void printMyName()
{
	cout << "My name is Andrei!" << endl;
}