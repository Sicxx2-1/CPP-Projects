#include <iostream>
#include <string>


using namespace std;


int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int number1);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("Andrei", "Bucur");
	int userNumber;
	cout << "Tell me a number you want to find the cube of: " << endl;
	cin >> userNumber;
	int cube = getResult(userNumber);


	cout << "Result num is " << resultNum << endl;
	cout << "Name is " << nameResult << endl;
	cout << "Cube of " << userNumber << " is " << cube << endl;



	return 0;
}


int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(int number1)
{
	return number1 * number1 * number1;
}