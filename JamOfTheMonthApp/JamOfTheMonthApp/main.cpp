#include <iostream>
#include <string>
using namespace std;


int main()
{
	char packageA = 'A';
	char packageB = 'B';
	char packageC = 'C';
	int packageAPrice = 8;
	int packageBPrice = 12;
	int packageCPrice = 15;
	int numberOfJelly;
	char packageAnswer;

	cout << "Which package do you own?" << endl;
	cin >> packageAnswer;
	cout << "How many jelly, jams or perserves you bought this month?" << endl;
	cin >> numberOfJelly;

	switch (numberOfJelly,packageAnswer) {
	case 'A':
	case 'a':
		if (numberOfJelly <= 2 && (packageAnswer == 'a' || packageAnswer == 'A')) {
			cout << "Everything covered by your package" << endl;
			break;
		}
		else if (numberOfJelly > 2 && (packageAnswer == 'a' || packageAnswer == 'A')) {
			cout << "Total amount you owe is: " << (packageAPrice + (numberOfJelly * 5) - (2 * 5)) << "$" << endl;
			break;
		} 
	case 'B':
	case 'b':
		if (numberOfJelly <= 4 && (packageAnswer == 'b' || packageAnswer == 'B')) {
			cout << "Everything covered by your package" << endl;
			break;
		}
		else if (numberOfJelly > 4 && (packageAnswer == 'b' || packageAnswer == 'B')) {
			cout << "Your total amount to pay is: " << (packageBPrice + (numberOfJelly * 4) - (4 * 4)) << "$" << endl;
			break;
		} 
	case 'C':
	case 'c':
		if (numberOfJelly <= 6 && (packageAnswer == 'c' || packageAnswer == 'C')) {
			cout << "Everything covered by your package" << endl; 
			break;
		}
		else if (numberOfJelly > 6 && packageAnswer == 'c' || packageAnswer == 'C') {
			cout << "Total amount you owe is: " << (packageCPrice + (numberOfJelly * 3) - (6*3)) << "$" << endl;
			break;
		} 
	default:cout << "Invalid type of package please try again" << endl;
	}


	return 0;
}