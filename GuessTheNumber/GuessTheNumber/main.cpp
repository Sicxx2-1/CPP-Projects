#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int userGuess;
	int counter = 0;
	srand(time(nullptr));
	int randomNumber = rand() % 100 + 1;


	cout << "Pick a number between 1 and 100: " << endl;
	cin >> userGuess;
	while (userGuess >= randomNumber || userGuess <= randomNumber) {
		if (userGuess < 1 || userGuess > 100) {
			counter++;
			cout << "You wasted a guess, pick a number only between 1 and 100" << endl;
			cout << endl;
			cout << "Pick another number: " << endl;
			cin >> userGuess;
		}
		else if (userGuess < randomNumber) {
			counter++;
			cout << "Your guess is too low!" << endl;
			cout << endl;
			cout << "Pick another number: " << endl;
			cin >> userGuess;
		}
		else if (userGuess > randomNumber) {
			counter++;
			cout << "Your guess is too high!" << endl;
			cout << endl;
			cout << "Pick another number: " << endl;
			cin >> userGuess;
		}
		else if (userGuess == randomNumber) {
			counter++;
			cout << "Congratulations! You guessed the number in " << counter << " guesses! Thanks for playing." << endl;
			break;
		}
	}

}