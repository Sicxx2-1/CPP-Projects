#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <int> myVec;
	int input;


	// Priming read
	cout << "Enter an integer greater than 0, or a negative one to quit: " << endl;
	cin >> input;

	while (input >= 0)
	{
		myVec.push_back(input);
		cout << "Enter an integer greater than 0, or a negative one to quit: " << endl;
		cin >> input;

	}

	cout << "Here are double the amount: " << endl;

	for (int num : myVec)
	{
		cout << num * 2 << endl;
	}
	

	return 0;

}