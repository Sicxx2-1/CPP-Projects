#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H
#include <iostream>
#include <string>
using namespace std;


class GameCharacter
{
public:
	GameCharacter(string name, int level, int health, bool isAlive, int inventorySize);
	~GameCharacter();
	void setItem(int slot, string item);
	void printInventory() const;
	void printCharacter() const;
	void takeDamage(int damage); 


private:
	string name;
	int level; 
	int health;
	bool isAlive;
	string* inventory;
	int inventorySize;
};

#endif