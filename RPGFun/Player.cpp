#include "Player.h"
#include <iostream>
#include <string>
using namespace std;


Player::Player(string name, race Race, int hitPoints, int magicPoints)
{
	this->name = name;
	this->Race = Race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}

string Player::getName() const
{
	return name;
}

race Player::getRace() const
{
	return Race;
}

string Player::whatRace() const
{
	if (Race == HUMAN)
	{
		return "Human";
	}
	else if (Race == ELF)
	{
		return "Elf";
	}
	else if (Race == DWARF)
	{
		return "Dwarf";
	}
	else if (Race == ORC)
	{
		return "Orc";
	}
	else if (Race == TROLL)
	{
		return "Troll";
	}
}

int Player::getHitPoints() const
{
	return hitPoints;
}

int Player::getMagicPoints() const
{
	return magicPoints;
}

void Player::setName(string name)
{
	this->name = name;
}

void Player::setRace(race Race)
{
	this->Race = Race;
}

void Player::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}