#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr)); 

	int val1 = rand() % 10; // Val1 will be >= 0 and < 10

	//shift it
	int val2 = rand() % 10 + 1; //Val2 will be >= 1 <= 10 

	int dieValue;
	for (int i = 0; i < 10; i++) {
		dieValue = rand() % 6 + 1;
		cout << dieValue << endl;
	}

	return 0;
}