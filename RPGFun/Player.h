#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

enum race {HUMAN, ELF, DWARF, ORC, TROLL};

class Player
{
public:
	Player(string name, race Race, int hitPoints, int magicPoints);
	string getName() const;
	race getRace() const;
	string whatRace() const;
	int getHitPoints() const;
	int getMagicPoints() const;
	void setName(string name);
	void setRace(race Race);
	void setHitPoints(int hitPoints);
	void setMagicPoints(int magicPoints);
	virtual string attack() const = 0;
private:
	string name;
	race Race;
	int hitPoints;
	int magicPoints;
};

#endif