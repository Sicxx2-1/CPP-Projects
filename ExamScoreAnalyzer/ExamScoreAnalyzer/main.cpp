#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int numOfStudents;
	vector<int> examScore;
	vector <int> passScore;
	vector <int> failScore;
	const int minPassingScore = 50;
	double scoreTotal = 0;
	int passed = 0;
	int failed = 0;
	double lowestScore, highestScore;

	cout << "How many students took the exam? " << endl;
	cin >> numOfStudents;

	for (int i = 0; i < numOfStudents; i++)
	{
		int input;
		cout << "Enter score for student " << (i +1) << endl;
		cin >> input; 
		examScore.push_back(input);
		scoreTotal += input;

		if (i == 0) {
			highestScore = input;
			lowestScore = input;
		}
		else {
			if (input > highestScore) {
				highestScore = input;
			}

			if (input < lowestScore) {
				lowestScore = input;
			}
		}

		if (input >= minPassingScore) {
			passScore.push_back(input);
			++passed;
		}
		else
		{
			failScore.push_back(input);
			++failed;
		}

	}
	cout << endl << endl;
	sort(examScore.begin(), examScore.end());
	cout << "Exam scores: " << endl;
	for (auto scores : examScore)
	{
		cout << scores << " ";
	}
	cout << endl << endl;

	double average = scoreTotal / numOfStudents;

	cout << "Highest score is: " << highestScore << endl;
	cout << "Lowest score is: " << lowestScore << endl;
	cout << "Class average is: " << average << endl;
	cout << endl << endl;

	cout << "Passing Scores: " << endl;
	for (auto pass : passScore)
	{
		cout << pass << " ";
	}
	cout << endl << endl;

	cout << "Failing Scores: " << endl;
	for (auto fail : failScore)
	{
		cout << fail << " ";
	}
	cout << endl << endl;

	cout << "Total passed: " << passed << endl;
	cout << "Total failed: " << failed << endl;



	return 0;
}