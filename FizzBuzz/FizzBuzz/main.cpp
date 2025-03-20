#include <iostream>
#include <string>
using namespace std;

void fizzBuzz(int number,int cond1, int cond2, string name1, string name2);

int main()
{
	int userRange;
	int condition1; 
	int condition2;
	string userName1;
	string userName2;
	cout << "Enter first number: " << endl;
	cin >> condition1;
	cout << "Enter the second number: " << endl;
	cin >> condition2;
	while (condition1 == condition2)
	{
		cout << "The two numbers are the same! Try again!" << endl;
		cout << "Enter first number: " << endl;
		cin >> condition1;
		cout << "Enter the second number: " << endl;
		cin >> condition2;
	}
	cin.ignore();
	cout << "Enter the first word" << endl;
	getline(cin, userName1);
	cout << "Enter the second word" << endl;
	getline(cin, userName2);
	cout << "Please enter a number: " << endl;
	cin >> userRange;

	fizzBuzz(userRange,condition1, condition2, userName1, userName2);

	return 0;
}


void fizzBuzz(int number,int cond1, int cond2, string name1, string name2)
{
	
	char userAnswer;
	for (int i = 1; i <= number; i++)
	{
		if (cond1 == cond2)
		{
			cout << "The two numbers must be different! Try again" << endl;
			break;
		}
		else if (i % cond2 == 0 && i  % cond1 == 0)
		{
			cout << name1 + name2 << endl;
		}
		else if (i % cond1 == 0)
		{
			cout << name1 << endl;
		}
		else if (i % cond2 == 0)
		{
			cout << name2<< endl;
		}
		else {
			cout << i  << endl;
		}
	}

	cout << "Want to play again? Y/N" << endl;
	cin >> userAnswer;
	if (userAnswer == 'Y' || userAnswer == 'y')
	{
		main();
	}
}