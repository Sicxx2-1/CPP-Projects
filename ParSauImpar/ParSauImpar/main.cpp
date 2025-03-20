#include <iostream> 
#include <vector>
using namespace std;


int main()
{
	int myArray[1000] = {};
	int const ARRAY_SIZE = 1000;
	vector <int> evenNum;
	vector <int> oddNum;


	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		myArray[i] = i;

		if (i % 2 == 0)
		{
			evenNum.push_back(i);
		}
		else{
			oddNum.push_back(i);
		}
	}
	cout << endl << endl;
	cout << "List of even numbers are: " << endl;
	for (auto even : evenNum) {
		cout << even << endl;
	}
	cout << endl << endl;
	cout << "List of odd numbers are: " << endl;
	for (auto odd : oddNum)
	{
		cout << odd << endl;
	}



	return 0;
}