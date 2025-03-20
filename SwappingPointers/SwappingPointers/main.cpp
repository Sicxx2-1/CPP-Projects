#include <iostream>
using namespace std;

void swapValues(int* a, int* b);

int main()
{
	int* firstPtr = new int(120);
	int* secondPtr = new int(300);

	cout << "Before swapping: " << endl;
	cout << "A: " << *firstPtr << endl;
	cout << "B: " << *secondPtr << endl;


	swapValues(firstPtr, secondPtr);

	delete firstPtr;
	delete secondPtr;

	return 0;
}


void swapValues(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "After swapping: " << endl;
	cout << "A: " << *a << endl;
	cout << "B: " << *b << endl;
 
}