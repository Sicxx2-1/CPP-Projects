#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void printFormatted(ofstream& file, int value);

int main()
{
	ofstream outfile;

	int userChoice;
	cout << "Tell me how many numers you want: " << endl;
	cin >> userChoice;
	cout << "Writing to file:" << endl;
	printFormatted(outfile, userChoice);
	cout << "Done!" << endl;
	return 0;
}

void printFormatted(ofstream &file, int value)
{
	file.open("output.txt");
	file << fixed << showpoint;
	cout << fixed << showpoint;
	for (int i = 1; i <= value; i++)
	{
		file << setw(12) << setprecision(2) << (i * 5.7575) << setw(12) << setprecision(3) << (i * 3.14159) << endl;
		cout << setw(12) << setprecision(2) << (i * 5.7575) << setw(12) << setprecision(3) << (i * 3.14159) << endl;
	}
	file.close();
}