#include <iostream>
#include <string>
#include "Player.h"
using namespace std;




int main()
{
	Player defaultPlayer;
	Player myPlayer;

	myPlayer.setName("Arthur Morgan");
	myPlayer.setLevel(10);
	myPlayer.setHealth(100);
	
	defaultPlayer.printPlayer();
	myPlayer.printPlayer();

	return 0;
}