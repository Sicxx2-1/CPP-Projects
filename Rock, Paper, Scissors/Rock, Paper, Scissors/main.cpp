#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/* 
0 -> Rock
1 -> Paper
3 -> Scissors

*/


int getComputerChoice();
int userChoice(string input);
void getWinner(int userPick, int pcPick);

int main()
{
	string input;
	cout << "Rock, Paper or Scissors?" << endl;
	getline(cin, input);
	int computerChoice = getComputerChoice();
	int userPicks = userChoice(input);
	getWinner(userPicks, computerChoice);

	return 0;
}


int getComputerChoice()
{
	srand(time(0));
	int choices = rand() % 3;

	if (choices == 0)
	{
		cout << "Computer chose: Rock" << endl;
	}
	else if (choices == 1)
	{
		cout << "Computer chose: Paper" << endl;
	}
	else if (choices == 2)
	{
		cout << "Computer chose: Scissors" << endl;
	}
	return choices;
}

int userChoice(string input)
{
	int userChoice;

	if (input == "Rock")
	{
		return userChoice = 0;
	}
	else if (input == "Paper")
	{
		return userChoice = 1;
	}
	else if (input == "Scissors")
	{
		return userChoice = 2;
	}
	
}

void getWinner(int userPick, int pcPick)
{
	char loopChoice;
	while (true)
	{
		if (userPick == pcPick)
		{
			cout << "It's a tie!" << endl;
		}
		else if (userPick == 1 && pcPick == 2)
		{
			cout << "You won! Rock beats Scissors!" << endl;
		}
		else if (userPick == 2 && pcPick == 1)
		{
			cout << "You won! Scissors beat Paper!" << endl;
		}
		else if (userPick == 1 && pcPick == 0)
		{
			cout << "You won! Paper beat Rock!" << endl;
		}
		else {
			cout << "You lost!" << endl;
		}

		cout << "Play again? (Y/N)" << endl;
		cin >> loopChoice;

		if (loopChoice == 'Y' || loopChoice == 'y')
		{
			main();
		}
	}
}