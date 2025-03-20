#include <iostream>
#include <string>
#include <stdexcept>
#include "AngryCatException.h"
using namespace std;

void feedKitty(int numTreats);

int main()
{
	int numTreats = 0;
	cout << "How many treats do you want to feed the kitty?" << endl;
	cin >> numTreats;


	try
	{
		feedKitty(numTreats);
	}
	catch (const AngryCatException& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}

void feedKitty(int numTreats)
{
	if (numTreats < 3)
	{
		throw AngryCatException();
	}
	else if (numTreats < 7)
	{
		throw AngryCatException("Kitty is not angry nor satisfied");
	}

	cout << "Kitty is happy with the num of treats! " << numTreats << " treats." << endl;
}