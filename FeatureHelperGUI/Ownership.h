#ifndef OWNERSHIP_H
#define OWNERSHIP_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


class Owner
{
public:
	Owner(string name, string feature);
	void countPrintAssets(vector<string> subFeatures, vector<int> assets, ofstream& file);

private:
	string name;
	string feature; // Experience Design, MTX, Cosmetic Assets
	int numberOrAssets;
	vector<string> subFeatures; // Cosmetic Assets - Banner related, rest of assets etc
	vector<int> assets;
};



#endif