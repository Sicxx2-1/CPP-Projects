#include <iostream>
#include <array>
using namespace std;
// 5 integers

int main()
{
	const int ARRAY_SIZE = 5;
	array <int, ARRAY_SIZE> myArray{};
	

	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "Enter an integer: " << endl;
		cin >> myArray[i];
	}

	cout << "Here are your integers but doubled: " << endl;
		
	for (int num : myArray) {
		cout << num * 2 << endl;
	}

	return 0;
}