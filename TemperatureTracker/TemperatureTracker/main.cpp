#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int daysOfTemp;
	double highestTemp, lowestTemp;
	double tempTotal = 0;
	vector <int> recorded;


	cout << "How many days of temperature data?" << endl;
	cin >> daysOfTemp; 

	for (int i = 0; i < daysOfTemp; i++)
	{
		double input;
		cout << "Enter temperature for day " << (i + 1) << ": " << endl;
		cin >> input;

		recorded.push_back(input);
		tempTotal += input;

		if (i == 0) {
			highestTemp = input;
			lowestTemp = input;
		}

		else {
			if (input > highestTemp) {
				highestTemp = input;
			}
			if (input < lowestTemp) {
				lowestTemp = input;
			}
		}



	}


	for (int i = 0; i < daysOfTemp; i++) {
		cout << "Day " << (i + 1) << ": " << recorded[i]<< " Celsius" << endl;
	}


	double average = tempTotal / daysOfTemp;
	cout << "Highest temperature: " << highestTemp << endl;
	cout << "Lowest temperature: " << lowestTemp << endl; 
	cout << "Average temperature: " << average << endl;



	return 0;
}