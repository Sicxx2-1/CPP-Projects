#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
	void setName(string name);
	void setLevel(int level);
	void setHealth(int health);
	string getName() const;
	int getLevel() const;
	int getHealth() const;
	void printPlayer() const;
	Player();
	~Player();

private:
	string name;
	int level;
	int health;
};

#endif
