#include <iostream>
#include <string>
#include "Rectangle.h"
using namespace std;



int main()
{
	Rectangle rect1(10, 20);
	Rectangle rect2(50, 100);
	Rectangle rect3(10, 20);
	Rectangle resultRect;

	resultRect = rect1 + rect2;

	cout << "rect 1 == rect3?" << boolalpha << (rect1 == rect3) << endl;

	cout << "resultRect length * width: " << resultRect.getLength() << " * " << resultRect.getWidth() << endl;
	cout << "resultRect area:" << resultRect.area() << endl;
	
	cout << endl << endl;

	cout << "Is rect2 != rect3? " << boolalpha << (rect2 != rect3) << endl;


	return 0;
}