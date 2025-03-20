#include <iostream>
using namespace std;

int averageGrade(int array[], int size);
int highestGrade(int array[], int size);

int main()
{
	int userInput;
	cout << "For how many kids you want to calculate the grades?" << endl;
	cin >> userInput;

	int* kidsArray = new int[userInput];

	for (int i = 0; i < userInput; i++) {
		int input;
		cout << "Enter grade for student " << (i + 1) << " :" << endl;
		cin >> input;
		kidsArray[i] = input;

	}

	int average = averageGrade(kidsArray, userInput);
	cout << "Average grade is: " << average << endl;

	int highest = highestGrade(kidsArray, userInput);
	cout << "The highest grade is: " << highest << endl;

	return 0;
}


int averageGrade(int array[], int size)
{
	int sum = 0; 

	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	
	return static_cast<double>(sum) / size;

}

int highestGrade(int array[], int size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}