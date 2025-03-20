#include <iostream>
#include <string>
#include "Player.h"
using namespace std;




void Player::setName(string name)
{
	this->name = name;
}

void Player::setLevel(int level)
{
	this->level = level;
}

void Player::setHealth(int health)
{
	this->health = health;
}

string Player::getName() const
{
	return name;
}

int Player::getLevel() const
{
	return level;
}

int Player::getHealth() const
{
	return health;
}

void Player::printPlayer() const
{
	cout << "Player name is: " << name << endl;
	cout << "Player level is: " << level << endl;
	cout << "Player health is: " << health << endl;
}

Player::Player()
{
	
	name = "Unknown";
	level = 1;
	health = 100;
}

Player::~Player()
{
	cout << "Player " << name << " has been removed from the game." << endl;
}