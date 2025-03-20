#include "Mage.h"
#include <iostream>
#include <string>
using namespace std;


Mage::Mage(string name, race Race, int hitPoints, int magicPoints) : Player(name, Race, hitPoints, magicPoints)
{
	hitPoints = 150;
	magicPoints = 150;
}

string Mage::attack() const
{
	return "I will crush you with the power of my arcane missiles!";
}