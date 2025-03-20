#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fullName;

	cout << "Please tell me your name: " << endl;
	getline(cin, fullName);

	cout << "Your name is " << fullName << endl;


	int userAge;
	cout << "Please type your age: " << endl;
	cin >> userAge;

	cout << "Your age is: " << userAge << endl;

	return 0;

}