#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <memory>
#include "Alien.h"
using namespace std;



int main()
{
	unique_ptr<Alien> protoAlien = make_unique<Alien>(50, 150, 'M');
	unique_ptr<Alien> alphaMale = make_unique<Alien>(150, 250, 'M');
	unique_ptr<Alien> smallFemale = make_unique<Alien>(50, 150, 'F');
	unique_ptr<Alien> queenFemale = make_unique<Alien>(130, 210, 'F');
	unique_ptr<Alien> pristine = make_unique<Alien>(*alphaMale + *queenFemale);
	
	
	cout << "Proto alien information:" << endl;
	cout << "Gender:" << protoAlien->getGender() << endl;
	cout << "Height: "<< protoAlien->getHeight() << endl;
	cout << "Weight: " << protoAlien->getWeight() << endl;

	cout << "Is protoalien == to AlphaMale?" << boolalpha << (protoAlien == alphaMale) << endl;
	cout << "The alpha male and the queen female are having a baby: " << endl;
	cout << endl << endl;
	cout << "Pristine baby: " << endl;
	cout << "Gender: " << pristine-> getGender() << endl;
	cout << "Height: " << pristine->getHeight() << endl;
	cout << "Weight: " << pristine->getWeight() << endl;
	
	cout << endl << endl;

	cout << "Is pristine greater than the alpha male?" << boolalpha << (pristine > alphaMale) << endl;
	cout << "Is pristine weaker than queen female?" << boolalpha << (pristine < queenFemale) << endl;
	cout << "Is pristine not equal to protoalien?" << boolalpha << (pristine != protoAlien) << endl;
	cout << endl << endl;

	cout << "Prestige levels for our aliens: " << endl;
	cout << "Proto Alien: " << protoAlien->getPrestige() << endl;
	cout << "Alpha Male: " << alphaMale->getPrestige() << endl;
	cout << "Small Female: " << smallFemale->getPrestige() << endl;
	cout << "Queen Female: " << queenFemale->getPrestige() << endl;
	cout << "Pristine: " << pristine->getPrestige() << endl;

	cout << endl << endl;
	cout << "Is Pristine Prestige higher than queen female's? " << boolalpha << (pristine->getPrestige() > queenFemale->getPrestige()) << endl;
	
	
	cout << "You better run!" << endl;
	return 0;
}