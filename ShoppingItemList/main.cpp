#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	vector<string>items = {};
	vector<int> frequency = {};
	string item;

	ifstream inputFile;
	inputFile.open("shopping.txt");
	
	if (!inputFile)
	{
		cout << "Sorry, trouble opening file please try again!" << endl;
		return 1;
	}

	while (inputFile >> item) {
		bool found = false;

		// Check if the item already exists in the vector
		for (int i = 0; i < items.size(); i++) {
			if (items[i] == item) {
				frequency[i]++;  // Increase frequency if item exists
				found = true;
				break;
			}
		}

		// If item is new, add it to the list and set frequency to 1
		if (!found) {
			items.push_back(item);
			frequency.push_back(1);
		}
	}


	cout << "The items and corresponding frequencies are: " << endl;
	for (auto i : items)
	{
		for (auto j : frequency)
		{
			cout << "Item " << i << " has the frequency of: " << j << endl;
		}
	}

	inputFile.close();
	return 0;
}