#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;


class Warrior : public Player
{
public:
	Warrior(string name, race Race, int hitPoints, int magicPoints);
	string attack() const;
};


#endif