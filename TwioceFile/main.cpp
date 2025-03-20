#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



int main()
{
	ifstream ints;
	ofstream outfile;
	int tempNum;

	cout << "Opening file..." << endl;
	ints.open("ints.txt");
	outfile.open("output.txt");

	if (!ints)
	{
		cout << "Trouble opening file...closing..." << endl;
		return 1;
	}

	while (!ints.eof())
	{
		ints >> tempNum;
		outfile << tempNum*2 << " " << endl;
	}

	cout << "Closing files..." << endl;
	ints.close();
	outfile.close();
	cout << "Done!" << endl;
	return 0;
}