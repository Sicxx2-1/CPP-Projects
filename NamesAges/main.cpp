#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	ifstream nameFile; 
	ifstream ageFile;
	ofstream outfile;


	string tempName;
	int tempAge;

	cout << "opening files..." << endl;

	nameFile.open("names.txt");
	ageFile.open("ages.txt");
	outfile.open("output.txt");

	if (!nameFile || !ageFile)
	{
		cout << "Problem opening one of the files...closing" << endl;
		return 1;
	}

	while (!nameFile.eof() && !ageFile.eof())
	{
		getline(nameFile, tempName);
		ageFile >> tempAge;
		outfile << tempName << " " << tempAge << endl;
	}




	nameFile.close();
	ageFile.close();
	outfile.close();
	cout << "Done" << endl;
	return 0;
}