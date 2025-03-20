#include "Alien.h"
#include <ctime>
#include <cstdlib>



Alien::Alien(int weight, int height, char gender)
{
	this->weight = weight;
	this->height = height;
	this->gender = gender;
}

Alien::Alien()
{
	height = 0;
	weight = 0;
	gender = 'M';
}

int Alien::getWeight() const
{
	return weight;
}

int Alien::getHeight() const
{
	return height;
}

char Alien::getGender() const
{
	return gender;
}

int Alien::getPrestige() const
{
	if (gender == 'M')
	{
		return height * weight * 2;
	}
	else if (gender == 'F')
	{
		return height * weight * 3;
	}
	else
	{
		return 0;
	}
}

bool Alien::operator==(const Alien& other)
{
	return gender == other.gender || height == other.height || weight == other.weight;

}

bool Alien::operator!=(const Alien& other)
{
	return gender != other.gender || height != other.height || weight != other.weight;
}

bool Alien::operator>(const Alien& other)
{
	return gender > other.gender || height > other.height || weight > other.weight;
}

bool Alien::operator>=(const Alien& other)
{
	return gender >= other.gender || height >= other.height || weight >= other.weight;
}

bool Alien::operator<(const Alien& other)
{
	return gender < other.gender || height < other.height || weight < other.weight;
}

bool Alien::operator<=(const Alien& other)
{
	return gender <= other.gender || height <= other.height || weight <= other.weight;
}

bool Alien::operator=(const Alien& other)
{
	return weight = other.weight;
	return height = other.height;
	return gender = other.gender;
}

Alien Alien::operator+(const Alien& other)
{
	srand(time(0));
	int randomChance = rand() % 10 + 1;
	if (randomChance == 1 || randomChance == 2 || randomChance == 3)
	{
		
		return Alien(
			(weight + other.weight) / 2,
			(height + other.height) / 2,
			gender = 'F');
		
	}
	else
	{
		return Alien(
		(weight + other.weight) / 2,
		(height + other.height) / 2,
		gender = 'M');
	}
}
