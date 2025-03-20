#include <iostream>
using namespace std;

int main()
{
	char grade;
	cout << "Please enter a letter grade: " << endl;
	cin >> grade;
	switch (grade)
	{
	case 'A':                                        // We use fallthrough to not get an invalid message even if the user inputs a lower case grade
	case 'a':
		cout << "Great job!" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Good job!" << endl;
		break;
	case 'C':
	case 'c':
		cout << "You can do better!" << endl;
		break;
	case 'D':
	case 'd':
		cout << "You are getting close to failing" << endl;
		break;
	case 'F':
	case 'f':
		cout << "You are failing the course!" << endl;
		break;
	default:
		cout << "You have entered a invalid grade. Try again!" << endl;
	}
	return 0;
}