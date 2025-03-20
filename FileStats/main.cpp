#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



int main()
{
	ifstream scores;
	int tempNum;
	double sum = 0;
	int max, min;
	double average;
	vector <int> scoreTable;
	cout << "Opening file..." << endl;

	scores.open("scores.txt");

	if (!scores)
	{
		cout << "Error while opening file... closing ..." << endl;
		return 1;
	}

	while (!scores.eof())
	{
		scores >> tempNum;
		if (tempNum >= 0 && tempNum <= 100)
		{
			scoreTable.push_back(tempNum);
			sum += tempNum;
		}
	}
	

	min = *min_element(scoreTable.begin(), scoreTable.end());
	max = *max_element(scoreTable.begin(), scoreTable.end());
	average = sum / scoreTable.size();
	cout << endl;
	cout << "Statistics: " << endl;
	cout << "\tMax: " << max << endl;
	cout << "\tMin: " << min << endl;
	cout << "\tAverage: " << average << endl;

	cout << endl;
	cout << "Closing the file..." << endl;
	scores.close();
	cout << "Done !" << endl;
	return 0;
}