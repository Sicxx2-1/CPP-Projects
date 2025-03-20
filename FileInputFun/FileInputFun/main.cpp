#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
	ifstream infile;

	infile.open("input.txt");

	int inputNum;
	int sum = 0;
	vector <int> myVector;

	while (!infile.eof())
	{
		infile >> inputNum;
		myVector.push_back(inputNum);
		sum += inputNum;
	}

	cout << "The numbers are: " << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
	cout << endl;
	cout << "Sum of numbers is: " << sum << endl;


	infile.close();

	return 0;
}