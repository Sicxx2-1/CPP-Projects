#include <iostream>
using namespace std;



int main()
{
	int* myIntPtr = new int(123);
	bool* myBoolPtr = new bool(true);


	cout << *myIntPtr << endl;
	cout << boolalpha << *myBoolPtr << endl;

	delete myIntPtr;
	delete myBoolPtr;

	myIntPtr = nullptr;
	myBoolPtr = nullptr;

	return 0;
}