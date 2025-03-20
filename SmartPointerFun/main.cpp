#include <iostream>
#include <memory>
using namespace std;



int main()

{
	unique_ptr<double> myDubPtr = make_unique<double>();
	*myDubPtr = 3.14;
	const int ARR_SIZE = 5;
	auto myArray = make_unique<int[]>(ARR_SIZE);

	cout << "Pointer value: " << *myDubPtr << endl;

	unique_ptr<double> otherPtr = move(myDubPtr);

	cout << "Other pointer is: " <<  * otherPtr << endl;

	for (int i = 0; i < ARR_SIZE; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}


	return 0;
}