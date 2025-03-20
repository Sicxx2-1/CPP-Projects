#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int howManyNumbers;
	vector <int> numbers;
	vector <int> evenNums;
	vector <int> oddNums;
	int evenCounter = 0;
	int oddCounter = 0;

	cout << "How many numbers do you want to enter? " << endl;
	cin >> howManyNumbers;

	for (int i = 0; i < howManyNumbers; i++)
	{
		int input;
		cout << "Enter number " << (i + 1) << endl;
		cin >> input;

		numbers.push_back(input);

		if (input % 2 == 0) {
			evenCounter += 1;
			evenNums.push_back(input);
		}
		else if (input % 2 != 0) {
			oddCounter += 1;
			oddNums.push_back(input);

		}
	}
	cout << "Numbers entered: " << endl;
	for (auto nums : numbers) {
		cout << nums << " "; 
	}
	cout << endl << endl;
	cout << "List of Even Numbers: " << endl;
	for (int even : evenNums) { cout << even << " "; }
	cout << endl << endl;
	cout << "List of Odd Numbers: " << endl;
	for (int odd : oddNums) { cout << odd << " "; }
	cout << endl << endl;
	cout << "Total Even Numbers: " << evenCounter << endl;
	cout << "Total Odd Numbers: " << oddCounter << endl;



	return 0;

}