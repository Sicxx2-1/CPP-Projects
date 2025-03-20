#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;


void getLetterGrade(int grade);

int main()
{
	int percent = 0;
	cout << "Enter your percetange please: " << endl;
	cin >> percent;
	try
	{
		getLetterGrade(percent);
	}
	catch (const out_of_range& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}


void getLetterGrade(int grade)
{

	if (grade >= 0 && grade <= 59)
	{
		cout << "Your grade is F" << endl;
	}
	else if (grade >= 60 && grade <= 69)
	{
		cout << "Your grade is D" << endl;
	}
	else if (grade >= 70 && grade <= 79)
	{
		cout << "Your grade is C" << endl;
	}
	else if (grade >= 80 && grade <= 89)
	{
		cout << "Your grade is B" << endl;
	}
	else if (grade >= 90 && grade <= 100)
	{
		cout << "Your grade is A" << endl;
	}
	else
	{
		throw out_of_range("Your percent must be within 0 and 100, inclusive");
	}


}