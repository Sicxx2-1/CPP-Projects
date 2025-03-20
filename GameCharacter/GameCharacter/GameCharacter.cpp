#include <iostream>
#include <string>
#include "GameCharacter.h"
using namespace std;


GameCharacter::GameCharacter(string name, int level, int health, bool isAlive, int inventorySize)
{
	this->name = name;
	this->level = level;
	this->health = health;
	this->isAlive = isAlive;
	this->inventorySize = inventorySize;
	
	inventory = new string[inventorySize];

	for (int i = 0; i < inventorySize; i++)
	{
		inventory[i] = "Empty";
	}

}

GameCharacter::~GameCharacter()
{
	cout << "Character " << name << " has been removed from the game." << endl;

	delete[] inventory;
}

void GameCharacter::printCharacter() const
{
	cout << "The character name is: " << name << endl;
	cout << "The level is: " << level << endl;
	cout << "And the health is: " << health << endl;
}

void GameCharacter::takeDamage(int damage)
{ 
	health -= damage;
	cout << name << " took " << damage << " damage!" << endl;
	
	if (health == 0)
	{
		isAlive = false;
	}

}


void GameCharacter::setItem(int slot, string item)
{
	inventory[slot] = item;
}

void GameCharacter::printInventory() const
{
	cout << "Inventory: " << endl;
	for (int i = 0; i < inventorySize; i++)
	{
		cout << "[" << i << "]" << " - " << inventory[i] << endl;
		cout << endl;
	}
}