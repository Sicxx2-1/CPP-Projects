#include <iostream>
#include <string>
#include <stdexcept>
#include "WarpDriveOverheating.h"
using namespace std;

void warpTest(int temp);

int main()
{
	int temp = 0;
	cout << "Testing temperatures: " << endl;
	cout << endl;
	try
	{
		temp = 20;
		warpTest(temp);
		temp = 50;
		warpTest(temp);
		temp = 80;
		warpTest(temp);
		temp = 85;
		warpTest(temp); 

	}
	catch (const WarpDriveOverheating& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}

void warpTest(int temp)
{
	if (temp <= 80)
	{
		cout << "Temperature is in normal working parameters." << endl;
	}
	else
	{
		throw WarpDriveOverheating();
	}
}