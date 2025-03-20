#include <iostream>
using namespace std;
/*
if statement
if else statement
switch
*/


int main()
{
	int age;
	cout << "Welcome to the Pub and Grill!" << endl;
	cout << "Please enter your age: " << endl;
	cin >> age;

	if (age >= 21) {
		cout << "Here have a beer!" << endl;
	}
	else if (age >= 16) {
		cout << "Here have a coke! At least you can drive :D" << endl;
	}
	else {
		cout << "You are not allowed to drink beer but here's a coke instead!" << endl;
	}
	
	cout << "Thanks for coming to the Pub and Grill!" << endl;

	return 0;
}