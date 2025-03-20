#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void passChecker(string password);

int main()
{
	string userPass;
	cout << "Please enter a password!" << endl;
	getline(cin, userPass);

	passChecker(userPass);

	return 0;
}


void passChecker(string password)
{

	int digitCount = 0;
	int alphaCount = 0;
	int specialCount = 0;
	int totalChars = 0;

	for (int i = 0; i < password.length(); i++)
	{
		totalChars++;


		if (isdigit(password[i]))
		{
			digitCount++;
		}
		else if (isalpha(password[i]))
		{
			alphaCount++;
		}
		else {
			specialCount++;
		}
	}

	if (totalChars < 6)
	{
		cout << "Weak Password: Less than 6 characters." << endl;
	}

	else if (totalChars > 8 && digitCount > 0 && alphaCount > 0 && specialCount > 0)
	{
		cout << "Very Strong Password: Letters, numbers, and symbols!" << endl;
	}

	else if (totalChars > 6 && (digitCount == 0 || alphaCount == 0))
	{
		cout << "Moderate Password: Only letters, no numbers or symbols." << endl;
	}

	else if (digitCount > 0 && totalChars > 8)
	{
		cout << "Strong Password: Letters & Numbers, but no symbols." << endl;
	}
}