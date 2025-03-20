#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int input;
	cout << "Enter a non-negative number to be added to sum, or negative to quit" << endl;
	cin >> input;
	while (input >= 0) {
		sum += input;
		cout << "Enter another non-negative number or negative to quit" << endl;
		cin >> input;
	}
	cout << "The sum is: " << sum << endl;
}