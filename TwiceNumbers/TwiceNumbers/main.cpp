#include <iostream>
#include <array>
using namespace std;

int main()
{

	array <int, 10> myArray{};

	for (int i = 0; i < 10; i++) {
		myArray[i] = i * 2;
	}

	for (auto numbers : myArray)
	{
		cout << numbers << endl;
	}

	cout << "Size of array: " << myArray.size() << endl;

	return 0;
}