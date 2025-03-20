#include <iostream>
#include <string>
using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);
void printName(string a);
int square(int number);

int main()
{
	string name;
	cout << "What is your name?" << endl;
	getline(cin, name);

	int num1 = 120;
	int num2 = 580;
	int number;
	cout << "Tell me a number to square: " << endl;
	cin >> number;


	printHello();
	printNumber(100);

	int someData = giveMe10();
	cout << someData << endl;

	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	printName(name);


	printNumber(addThese(num1,50));

	int squareNumber = square(number);
	cout << "Number " << number << " square is: " << squareNumber << endl;

	return 0;
}



void printHello()
{
	cout << "Hello there!" << endl;

}


void printNumber(int a)
{
	cout << "The number is: " << a << endl;
}

int giveMe10()
{
	return 10;

}


int addThese(int num1, int num2)
{
	return num1 + num2;
}

void printName(string a)
{
	cout << "Your name is: " << a << endl;
}

int square(int number)
{
	return number * number;
}