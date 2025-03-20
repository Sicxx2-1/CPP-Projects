#include <iostream>
#include <array>
using namespace std;

int main()
{

	int myNums[2][3]{
		{1,2,3},
		{4,5,6}
	}; // 2D array that is 2 X 3 -> 2 rows 3 columns

	cout << myNums[0][2] << endl;

	myNums[1][0] = 14;

	cout << myNums[1][0] << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << myNums[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl << endl << endl << endl;

	for (int i = 1; i >= 0; i--) {
		for (int j = 2; j >= 0; j--) {
			cout << myNums[i][j] << " ";
		}
		cout << endl;
	}



	return 0;

}