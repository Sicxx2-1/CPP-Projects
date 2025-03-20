#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
using namespace std;


int main()
{
	int userChoice;
	cout << "Which of the following would like?" << endl;
	cout << "\t 1 - Create a Warrior" << endl;
	cout << "\t 2 - Create a Priest" << endl;
	cout << "\t 3 - Create a Mage" << endl;
	cout << "\t 0 - finish creating player characters" << endl;
	cin >> userChoice;
	vector <Player*> players{};

	while (userChoice != 0)
	{
		if (userChoice == 1)
		{
			string tempName;
			int tempChoice;
			cout << "What would you like to name your character?" << endl;
			cin.ignore();
			getline(cin, tempName);
			cout << "Now, which race do you want?" << endl;
			cout << "\t 1 - Human" << endl;
			cout << "\t 2 - Elf" << endl;
			cout << "\t 3 - Dwarf" << endl;
			cout << "\t 4 - Orc" << endl;
			cout << "\t 5 - Troll" << endl;
			cin >> tempChoice;

			if (tempChoice == 1)
			{
				players.push_back(new Warrior(tempName, HUMAN, 200, 0));
			}
			else if (tempChoice == 2)
			{
				players.push_back(new Warrior(tempName, ELF, 200, 0));
			}
			else if (tempChoice == 3)
			{
				players.push_back(new Warrior(tempName, DWARF, 200, 0));
			}
			else if (tempChoice == 4)
			{
				players.push_back(new Warrior(tempName, ORC, 200, 0));
			}
			else if (tempChoice == 5)
			{
				players.push_back(new Warrior(tempName, TROLL, 200, 0));
			}
		}
		
		if (userChoice == 2)
		{
			string tempName;
			int tempChoice;
			cout << "What would you like to name your character?" << endl;
			cin.ignore();
			getline(cin, tempName);
			cout << "Now, which race do you want?" << endl;
			cout << "\t 1 - Human" << endl;
			cout << "\t 2 - Elf" << endl;
			cout << "\t 3 - Dwarf" << endl;
			cout << "\t 4 - Orc" << endl;
			cout << "\t 5 - Troll" << endl;
			cin >> tempChoice;

			if (tempChoice == 1)
			{
				players.push_back(new Priest(tempName, HUMAN, 100, 200));
			}
			else if (tempChoice == 2)
			{
				players.push_back(new Priest(tempName, ELF, 100, 200));
			}
			else if (tempChoice == 3)
			{
				players.push_back(new Priest(tempName, DWARF, 100, 200));
			}
			else if (tempChoice == 4)
			{
				players.push_back(new Priest(tempName, ORC, 100, 200));
			}
			else if (tempChoice == 5)
			{
				players.push_back(new Priest(tempName, TROLL, 100, 200));
			}

		}

		if (userChoice == 3)
		{
			string tempName;
			int tempChoice;
			cout << "What would you like to name your character?" << endl;
			cin.ignore();
			getline(cin, tempName);
			cout << "Now, which race do you want?" << endl;
			cout << "\t 1 - Human" << endl;
			cout << "\t 2 - Elf" << endl;
			cout << "\t 3 - Dwarf" << endl;
			cout << "\t 4 - Orc" << endl;
			cout << "\t 5 - Troll" << endl;
			cin >> tempChoice;

			if (tempChoice == 1)
			{
				players.push_back(new Mage(tempName, HUMAN, 150, 150));
			}
			else if (tempChoice == 2)
			{
				players.push_back(new Mage(tempName, ELF, 150, 150));
			}
			else if (tempChoice == 3)
			{
				players.push_back(new Mage(tempName, DWARF, 150, 150));
			}
			else if (tempChoice == 4)
			{
				players.push_back(new Mage(tempName, ORC, 150, 150));
			}
			else if (tempChoice == 5)
			{
				players.push_back(new Mage(tempName, TROLL, 150, 150));
			}
		}
		cout << "Which of the following would like?" << endl;
		cout << "\t 1 - Create a Warrior" << endl;
		cout << "\t 2 - Create a Priest" << endl;
		cout << "\t 3 - Create a Mage" << endl;
		cout << "\t 0 - finish creating player characters" << endl;
		cin >> userChoice;
	}

	for (Player* player : players)
	{
		cout << "I'm a " << player->whatRace() << " and my attack is " << player->attack() << endl;
	}
	
	for (Player* player : players)
	{
		delete player;
	}

	return 0;
}