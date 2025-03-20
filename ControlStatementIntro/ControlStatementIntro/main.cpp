#include <iostream>
using namespace std;

int main()
{
	int age = 15;
	cout << age << endl; // Sequential statement

	if (age >= 16) {
		cout << "You can drive" << endl;
	}
	else {
		cout << "You can't drive yet" << endl;  // Selection statement
	}

	//for loop
	for (int i = 1; i <= age; i++)        //Repetition statement
	{
		cout << "Happy Birthday! " << i << endl;
	}

	return 0;
}