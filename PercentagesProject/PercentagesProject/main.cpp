#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fullName;
	string location;
	int initialScore;


	cout << "Write a random number from 0 to 100:" << endl;
	cin >> initialScore;
	cin.get();

	cout << "What is your full name? " << endl;
	getline(cin, fullName);

	cout << "What is your city, province and country?" << endl;
	getline(cin, location);

	

	cout << "Hello, " << fullName << ".We heard you are from " << location << ".Your original score was " << initialScore << " but with five points added to it is now: " << (initialScore + 5);

	return 0;
}