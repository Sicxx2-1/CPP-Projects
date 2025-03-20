#include <iostream>
#include <string>
#include <cmath>
#include "Circle.h"
using namespace std;


Circle::Circle()
{
	this->radius = 1;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::circumference() const
{
	double pi = 3.14159265358979;
	return 2 * pi * radius;
}

double Circle::area() const
{
	double pi = 3.14159265358979;
	return pi * pow(radius, 2);
}