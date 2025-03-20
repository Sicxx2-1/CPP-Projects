#include "Warrior.h"
#include <iostream>
#include <string>
using namespace std;


Warrior::Warrior(string name, race Race, int hitPoints, int magicPoints) : Player(name, Race, hitPoints, magicPoints)
{
	hitPoints = 200;
	magicPoints = 0;
}

string Warrior::attack() const
{
	return "I will destroy you with my sword, foul demon!";
}