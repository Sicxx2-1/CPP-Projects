#include "Ownership.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


Owner::Owner(string name, string feature)
{
	this->name = name;
	this->feature = feature;
}


void Owner::countPrintAssets(vector<string> subFeatures, vector<int> assets, ofstream& file)
{
	
	cout << "The Feature is " << feature << endl;
	cout << "The Feature Owner is " << name << endl;
	cout << "Sub-features and the assets count are as following: " << endl;
	cout << endl << endl;

	file << "The Feature is " << feature << endl;
	file << "The Feature Owner is " << name << endl;
	file << "Sub-features and the assets count are as following: " << endl;
	file << endl << endl;

	for (int i = 0; i < subFeatures.size(); i++)
	{
		cout << subFeatures[i] << " : " << assets[i] << endl;
		file << subFeatures[i] << " : " << assets[i] << endl;
	}

	cout << "Thank you for using the Feature Ownership Tracker Assistant!" << endl;
	file << "Thank you for using the Feature Ownership Tracker Assistant!" << endl;
}


