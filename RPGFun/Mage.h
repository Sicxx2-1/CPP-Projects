#ifndef MAGE_H
#define MAGE_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Mage : public Player
{
public:
	Mage(string name, race Race, int hitPoints, int magicPoints);
	string attack() const;
};

#endif