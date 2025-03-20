#include <iostream>
using namespace std;

int main()
{
	bool isRaining = false;
	bool isWarm = false;
	cout << boolalpha;
	cout << "And: " << (isRaining && isWarm) << endl;
	cout << "OR: " << (isRaining || isWarm) << endl;
	cout << "NOT: " << (!isRaining) << endl;
	return 0;
}