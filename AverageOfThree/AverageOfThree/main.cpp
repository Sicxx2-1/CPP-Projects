#include <iostream>
using namespace std;

int main()
{
	double num1;
	double num2; 
	double num3;

	cout << "Please tell me 3 real numbers separated by using a space: " << endl;
	cin >> num1 >> num2 >> num3;

	cout << "The average of your numbers is: " << ((num1 + num2 + num3) / 3);


	return 0;
}