#include <iostream>
using namespace std;

/*
while loops
do-while loops
for loops
*/


int main()
{
	int count = 0;

	while (count < 10) {
		cout << count << endl;
		count++;
	}
	cout << endl << endl;
	//do-while loop -> runs at least once and then does the test
	int count2 = 10;
	do
	{
		cout << count2 << endl;
		count2++;
	} while (count2 < 10);
	cout << endl <<endl;
	//for loop
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	cout << endl << endl;

	// Priming read  (sentinel values means negative)
	int input;
	cout << "Please enter an non-negative integer, and negative if you want to quit" << endl;
	cin >> input;
	while (input >= 0) {
		cout << input << endl;
		cout << "Please enter an non-negative integer, and negative if you want to quit" << endl;
		cin >> input;
	} 

	return 0;
}