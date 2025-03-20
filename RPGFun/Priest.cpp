#include "Priest.h"
#include <iostream>
#include <string>
using namespace std;

Priest::Priest(string name, race Race, int hitPoints, int magicPoints) : Player(name, Race, hitPoints, magicPoints)
{
	hitPoints = 100;
	magicPoints = 200;
}

string Priest::attack() const
{
	return "I will assault you with Holy Wrath!";
}