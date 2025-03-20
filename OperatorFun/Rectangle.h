#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <string>
using namespace std;


class Rectangle
{

public:
	Rectangle();
	Rectangle(double length, double width);
	double getLength() const;
	double getWidth() const;
	void setLength(double length);
	void setWidth(double width);
	double area() const;
	double perimeter() const;


	bool operator==(const Rectangle& other) const;
	Rectangle operator+(const Rectangle& other) const;
	void operator=(const Rectangle& other);
	bool operator!=(const Rectangle& other) const;

private:
	double length;
	double width;
};










#endif