#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void runGame(int number, int guesses);


int main()
{
	srand(time(0));
	int randomNumber = rand() % 100 + 1;
	int userGuess = 0;

	runGame(randomNumber, 5);

	return 0;
}


void runGame(int number, int guesses)
{
	int counter = 0;
	int userInput;
	cout << "Guess a number between 0 and 100: " << endl;
	cin >> userInput;
	for (int i = 0; i < guesses; i++) {

		if (userInput < number)
		{
			cout << "Too low! Try again!" << endl;
			cin >> userInput;
			counter++;
		}

		else if (userInput > number)
		{
			cout << "Too high! Try again!" << endl;
			cin >> userInput;
			counter++;
		}
	}
	if (userInput == number)
	{
		cout << "Congratulations! You guessed it in " << counter << " attempts." << endl;
	}
};
