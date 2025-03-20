#include <iostream>
using namespace std;

void numeros(int num1, int num2);
void numeros(int num1, string name1);
void numeros(string name1);

int main()
{
	numeros(1, 2);
	numeros(25, "Andrew");
	numeros("Michael");

	return 0;
}


void numeros(int num1, int num2)
{
	cout << "Your numbers are: " << endl;
	cout << num1 << endl;
	cout << num2 << endl;
}

void numeros(int num1, string name1)
{
	cout << name1 << "'s age is " << num1 << endl;;
}

void numeros(string name1)
{
	cout << "Hello " << name1 << "!" << endl;
}