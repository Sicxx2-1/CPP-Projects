#ifndef ALIEN_H
#define ALIEN_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class Alien
{
public:
	Alien(int weight, int height, char gender);
	Alien();
	int getWeight() const;
	int getHeight() const;
	char getGender() const;
	int getPrestige() const;
	bool operator==(const Alien& other);
	bool operator!=(const Alien& other);
	bool operator>(const Alien& other);
	bool operator>=(const Alien& other);
	bool operator<(const Alien& other);
	bool operator<=(const Alien& other);
	bool operator=(const Alien& other);
	Alien operator+(const Alien& other);
private:
	int weight;
	int height;
	char gender;
};


#endif