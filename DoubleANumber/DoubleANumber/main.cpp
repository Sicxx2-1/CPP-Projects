#include <iostream>
using namespace std;

void doubleValue(int* num);

int main()
{
	int* userIntPtr = new int();
	cout << "Tell me a number you want to double: " << endl;
	cin >> *userIntPtr;

	cout << "Your number before doubling: " << *userIntPtr << endl;
	doubleValue(userIntPtr);

	return 0;
}


void doubleValue(int* num)
{
	*num = *num * 2;
	cout << "Your number after doubling: " << *num  << endl;
}