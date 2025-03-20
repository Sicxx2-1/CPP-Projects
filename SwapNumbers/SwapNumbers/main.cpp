#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b);


int main()
{
	int* firstPtr = new int(250);
	int* secondPtr = new int(1300);

	swapNumbers(firstPtr, secondPtr);

	delete firstPtr;
	delete secondPtr;

	return 0;
}


void swapNumbers(int* a, int* b)
{
	int tempVar = *a;
	*a = *b;
	*b = tempVar;
	cout << "Numbers after swapping: " << endl;
	cout << "a = " << *a << endl;
	cout << "b = " << *b << endl;
}