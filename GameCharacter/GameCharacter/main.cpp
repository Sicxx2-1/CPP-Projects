#include <iostream>
#include <string>
#include "GameCharacter.h"
using namespace std;



int main()
{
	GameCharacter myCharacter("Geralt", 10, 100, true, 3);
	
	myCharacter.setItem(0, "Silver Sword");
	myCharacter.setItem(1, "Health Potion");
	myCharacter.setItem(2, "Armor Piece");
	myCharacter.printCharacter();
	cout << endl;
	myCharacter.printInventory();
	

	return 0;
}