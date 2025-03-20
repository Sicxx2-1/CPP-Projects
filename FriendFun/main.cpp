#include <iostream>
#include <string>
#include "Rectangle.h"
using namespace std;



int main()
{
	Rectangle r1(10, 25);
	cout << "r1 area " << r1.area() << endl;

	changeData(r1);

	cout << "Now r1 area is " << r1.area() << endl;


	return 0;
}

void changeData(Rectangle& rect)
{
	rect.width = 100;
	rect.length = 100;
}