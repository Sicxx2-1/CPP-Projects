#include <iostream>
using namespace std;


void findMaxRows(int** matrix, int rows, int cols);

int main()
{
	int rows = 0;
	int cols = 0;
	cout << "Tell me how many rows: " << endl;
	cin >> rows;
	cout << "Tell me how many columns: " << endl;
	cin >> cols;

	int** arrPtr = new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		arrPtr[i] = new int[cols];
	}

	cout << "Enter values:" << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << "Row " << i+1 << endl;
		for (int j = 0; j < cols; j++)
		{
			cin >> arrPtr[i][j];
		}
	}

	findMaxRows(arrPtr, rows, cols);


	for (int i = 0;i < rows; i++)
	{
		delete[] arrPtr[i];
	}
	delete[] arrPtr;
	return 0;
}


void findMaxRows(int** matrix, int rows, int cols)
{
	int largestSum = 0;
	int maxRowIndex = 0;

	for (int i = 0; i < rows;i++)
	{
		int sum = 0;
		for (int j = 0; j < cols;j++)
		{
			sum += matrix[i][j];
		}
		if (sum > largestSum)
		{
			largestSum = sum;
			maxRowIndex = i;
		}
	}

	cout << "Row " << maxRowIndex + 1 << " has the highest sum: " << largestSum << endl;
}