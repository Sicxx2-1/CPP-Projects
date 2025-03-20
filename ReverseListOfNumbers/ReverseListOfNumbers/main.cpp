#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int howMany;
	vector <int> listNum;

	cout << "How many numbers do you want to enter? " << endl;
	cin >> howMany;

	for (int i = 0; i < howMany; i++)
	{
		int input;
		cout << "Enter number " << (i + 1) << endl;
		cin >> input; 
		listNum.push_back(input);
	}
	cout << endl << endl;
	cout << "Numbers entered " << endl;
	for (int num : listNum)
	{
		cout << num << " "; 
	}
	cout << endl << endl;

	reverse(listNum.begin(), listNum.end());
	cout << "Numbers in reverse order: " << endl;
	for (int revNum : listNum)
	{
		cout << revNum << " ";
	}


	return 0;
}