#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int numberOfStudents;
	double gradeTotal = 0;
	vector <double> studentGrades;

	cout << "Enter number of students: " << endl;
	cin >> numberOfStudents;
	
	for (int i = 0; i < numberOfStudents; i++)
	{
		double input;
		cout << "Enter grade for student " << (i + 1) << endl;
		cin >> input;


		studentGrades.push_back(input);
		gradeTotal += input;
	}

	cout << "Grades entered: " << endl;

	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << "Student " << (i + 1) << studentGrades[i] << endl;
	}

	double average = gradeTotal / numberOfStudents;
	cout << "Class average: " << average << endl;

	return 0;


}