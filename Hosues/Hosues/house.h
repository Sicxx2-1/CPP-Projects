#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House
{
public:
	void setNumStories(int numStories);
	void setNumWindows(int numWindows);
	void setColor(string color);
	int getNumStories() const;
	int getNumWindows() const;
	string getColor() const;
	void printHouse() const;
	House(int windows, int stories, string color);
	~House();

	private:
		int numStories;
		int numWindows;
		string color;
}; // end of the class HOuse

#endif