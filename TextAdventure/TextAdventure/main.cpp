#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string initAnswer;
	int userHealth;
	string userName;
	vector <string> userInventory;
	int choices = 0;
	int currentItems = 0;
	
	cout << "I heard you like an adventure and a challenge! This is right what you are looking for!" << endl;
	cout << "I have lost a chest full of gold while running away from the swamp evil spirits" << endl;
	cout << "Would you help me find it?" << endl;
	getline(cin, initAnswer);

	if (initAnswer == "yes" || initAnswer == "Yes") {
		cout << "Great news for me then!" << endl;
		cout << "Before we proceed please tell me your name: " << endl;
		getline(cin, userName);
		userHealth = 100;
		cout << "Glad to meet you " << userName << "!" << endl;
		cout << "I will give you a sword to keep on you just in case" << endl;
		userInventory.push_back("sword");
		currentItems++;
		choices++;
		cout << "No no no, don't worry, you won't use it but it's good to have" << endl;
		cout << "You will need to go North in order to reach the swamp, from there you need to go with your gut instinct" << endl;
		cout << "Once you retrieved my precious gold come back to the tavern" << endl;
		cout << "We'll split it and enjoy it together!" << endl;
		cout << "Go now, we don't have time to waste, someone already heard our story and began their journey!" << endl;
	}
	else {
		cout << "Sorry to hear that young sir. I must go now!" << endl;
		userHealth = 0;
	}



	while (userHealth > 0) {
		string input;
		cout << "Which way you want to go?" << endl;
		cout << "East, West, North or South?" << endl;
		getline(cin, input);
		if (input == "east" || input == "East") {
			cout << "You encountered an Ancient Golem and you currently have " << currentItems << " items, and " << userHealth << " Health" << endl;
			cout << "Do you wish to attack the Ancient Golem?" << endl;
			getline(cin, input);

			if (input == "Yes" || input == "yes") {
				cout << "You died fighting the Ancient Golem" << endl;
				choices++;
				break;
			}
			else {
				cout << "You ran away but someone already found the gold" << endl;
				choices++;
				break;
				
			}
		}
		else if (input == "West" || input == "west")
		{
			cout << "You stepped on a secret trap door set for thieves" << endl;
			cout << "You fell down a hatch and got splattered into pieces" << endl;
			choices++;
			break;
			
		}

		else if (input == "South" || input == "south")
		{
			cout << "You wandered for hours only with a " << userInventory[0] << " available." << endl;
			cout << "The old man was right, you won't use it" << endl;
			cout << "But you died of thirst in the process." << endl;
			choices++;
			break;
			
		}

		else
		{
			cout << "You see an old house" << endl;
			cout << "Do you wish to approach it?" << endl;
			getline(cin, input);
			choices++;

			if (input == "yes" || input == "Yes")
			{
				cout << "You found a rusty chest plate" << endl;
				cout << "Do you with to keep it?" << endl;
				getline(cin, input);
				choices++;
				if (input == "yes" || input == "Yes")
				{
					userInventory.push_back("Rusty Chestplate");
					currentItems++;
					choices++;
				} 
				else {
					cout << "You continue your journey towards the Swamps" << endl;
				}
			}
			else {
				cout << "You skip looking inside the house and continue your journey towards the Swamps" << endl; 
			}

		} 
		cout << endl << endl;
		cout << "You see the swamps from afar" << endl;
		cout << "A wild boar attacks you!" << endl;
		cout << "Attack it?" << endl;
		cout << endl << endl;
		getline(cin, input);
		if (input == "yes" || input == "Yes")
		{
			cout << "You killed the boar but lost 5 health, and you Breastplate got destroyed" << endl;
			userHealth -= 5;
			if (!userInventory.empty()) userInventory.pop_back();
			cout << "You currenty have " << currentItems << " items, and " << userHealth << " health" << endl;
			cout << "You continue towards the swamps." << endl;
			choices++;
		}
		else {
			cout << "You managed to run away but lost 15 health." << endl;
			userHealth -= 15;
			cout << "You currently have " << currentItems << " items, and " << userHealth << " health" << endl;
			cout << "You continue towards the swamps" << endl;
			choices++;
		}
		cout << endl << endl;
		cout << "You have reached the swamps." << endl;
		cout << "You see a big cave on your left and a big tree on your right" << endl;
		cout << "Gut instinct is leaning towards the big cave" << endl;
		cout << "Go with your guts?" << endl;
		getline(cin, input);
		cout << endl << endl;
		if (input == "yes" || input == "Yes")
		{
			cout << "You enter the cave and see a bright chest reflecting sunlight" << endl;
			cout << "Proceed towards it?" << endl;
			getline(cin, input);
			if (input == "yes" || input == "Yes")
			{
				cout << "You found the old's man chest!" << endl;
				cout << "You start heading back to the tavern" << endl;
				currentItems++;
				choices++;
			}
			else {
				cout << "You head back but got attacked by Swamps Evil Spirits" << endl;
				cout << "Their forced were unmatched and you died" << endl;
				choices++;
				break;
				
			}
		}
		else
		{
			cout << "You decide to turn back and got attacked by the Swamps's evil spirits" << endl;
			cout << "Their forced were unmatched and you died" << endl;
			choices++;
			break;
			
		}
		cout << endl << endl;
		cout << "While heading back to the tavern you ran into a Mythical Bear" << endl;
		cout << "Attack it?" << endl;
		getline(cin, input);
		if (input == "yes" || input == "Yes")
		{
			cout << "His strength was unmatched" << endl;
			cout << "The bear easily mauled you and ate your corpse" << endl;
			choices++;
			break;
			
		}
		else
		{
			cout << "You managed to run away but lost 60 health" << endl;
			userHealth = 30;
			cout << "You currently have " << currentItems << " items and " << userHealth << " health" << endl;
			choices++;
		}
		cout << endl << endl;
		cout << "You almost reached the tavern but you are getting attacked by a thief" << endl;
		cout << "Attack him?" << endl;
		getline(cin, input);
		if (input == "no" || input == "No")
		{
			cout << "You tried to run away, but he had a bow with him" << endl;
			cout << "A sharp arrow penetrates your heart from behind" << endl;
			cout << "You lost the treasure and died in a pool of blood" << endl;
			choices++;
			break;
			
		}
		else
		{
			cout << "You swing your trusty sword towards the thief" << endl;
			cout << "You cracked the scum's head with your strength and might" << endl;
			cout << "You managed to keep the treasure and only lost 5 health in the process" << endl;
			cout << "You currently have " << currentItems <<
				" items and " << userHealth << " health." << endl;
		}
		cout << endl << endl;
		cout << "Ah! Glad to see you " << userName << "!" << endl;
		cout << "I see you found my treasure. Can you give it to me?" << endl;
		getline(cin, input);
		if (input == "no" || input == "No")
		{
			cout << "You decide to keep the treasure to yourself and attack the old man" << endl;
			cout << "The old man cast a spell and obliterated you from existence" << endl;
			choices++;
			break;
		}
		else {
			cout << "Thank you!" << endl;
			cout << "Here have 1000 golds for your trouble" << endl;
			cout << "I hope you had fun, but now I really got to go somewhere else" << endl;
			cout << "Enjoy your gold !" << endl;
			cout << "The old man cast a spell and dissappeared" << endl; 
			userInventory.pop_back();
			userInventory.push_back("1000 golds");
			currentItems++;
			choices++;
			break;;
			
		}


	}
	cout << endl << endl;
	cout << "Congratulations " << userName << "!" << endl;
	cout << "You finished your journey by doing " << (choices + 1) << " choices!" << endl;
	cout << "You had " << currentItems << " number of items" << endl;
	cout << "Your items: " << endl;
	for (string items : userInventory)
	{
		cout << items << " ";
	}
	cout << endl;
	cout << "Thanks for playing!";

	return 0;


}