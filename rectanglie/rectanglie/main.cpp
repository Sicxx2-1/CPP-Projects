#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Rectangle.h"
using namespace std;


int main()
{
	ifstream rect;
	ofstream output;
	
	cout << "Opening file..." << endl;
	rect.open("rectangles.txt");
	output.open("output.txt");

	int tempLength, tempWidth;
	vector <Rectangle*> rectangles;

	if (!rect)
	{
		cout << "Problem opening the designated file... Closing..." << endl;
		return 1;
	}

	
	while (!rect.eof())
	{
		rect >> tempLength >> tempWidth;
		Rectangle* rectPtr = new Rectangle(tempLength, tempWidth);
		rectangles.push_back(rectPtr);
	}

	for (Rectangle* rect : rectangles)
	{
		output << "Area: " << rect->area() << " ,Perimeter " << rect->perimeter() << endl;
	}

	for (Rectangle* rect : rectangles)
	{
		delete rect;
	}

	rectangles.clear();
	rect.close();
	output.close();

	cout << "Done" << endl;
	return 0;
}