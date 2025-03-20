#include <iostream>
using namespace std;

int main()
{
	int age;
	char gender;
	cout << "Please tell me your age: " << endl;
	cin >> age;
	cout << "Please tell me your gender: " << endl;
	cin >> gender;

	if (age >= 60 && gender == 'f' || gender == 'F') {
		cout << "You qualify for the discount!" << endl;
	}
	else {
		cout << "You don't qualify for the discount!" << endl;
	}
	return 0;
}