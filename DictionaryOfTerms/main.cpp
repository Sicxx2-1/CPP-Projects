#include <iostream>
#include <string>
#include <map>
#include "Dictionary.h"
using namespace std;

void dictApp(Dictionary& dict);

int main()
{	
	Dictionary dictionary;
	dictApp(dictionary);
	cout << "Thank you for using the Dictionary of Terms application!" << endl;
	return 0;
}


void dictApp(Dictionary& dict)
{
	int userChoice;
	while (true)
	{
		cout << "Welcome to the dictionary application!" << endl;
		cout << endl << endl;
		cout << "What would you like to do: " << endl;
		cout << "\t 1 - Add a definition" << endl;
		cout << "\t 2 - Get the definition of a desired word" << endl;
		cout << "\t 3 - Print all words and their definitions" << endl;
		cout << "\t 0 - Exit the program" << endl;
		cin >> userChoice;
		cin.ignore();
		if (userChoice == 1)
		{
			string tempWord;
			string tempDef;
			cout << "Please enter the word: " << endl;
			getline(cin, tempWord);
			cout << "Please enter the definition: " << endl;
			getline(cin, tempDef);
			dict.addDefinition(tempWord, tempDef);
			cout << endl << endl;
		}
		else if (userChoice == 2)
		{
			string tempWord;
			cout << "Please specify the word: " << endl;
			getline(cin, tempWord);
			string def = dict.getDefinition(tempWord);
			cout << "Definition:" << endl;
			cout << def << endl;
			cout << endl << endl;

		}
		else if (userChoice == 3)
		{
			dict.printAllDefinitions();
			cout << endl << endl;
		}
		else if (userChoice == 0)
		{
			break;
		}
		else
		{
			cout << "Invalid option, please try again!" << endl;
		}
	}
}