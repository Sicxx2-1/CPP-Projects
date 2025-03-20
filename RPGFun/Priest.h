#ifndef PRIEST_H
#define PRIEST_H
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Priest : public Player
{
public:
	Priest(string name, race Race, int hitPoints, int magicPoints);
	string attack() const;
};

#endif

