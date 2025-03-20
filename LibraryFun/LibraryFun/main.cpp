#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int powResult = pow(2, 3);
	int sqrResult = sqrt(25);
	int ceilResult = ceil(4.2);
	int floorResult = floor(4.2);
	double param, result;

	param = 512;
	result = log2(param);

	cout << "2^3 is " << powResult << endl;
	cout << "sqrt of 25 is " << sqrResult << endl;
	cout << "Ceiling of 4.2 is " << ceilResult << endl;
	cout << "Floor of 4.2 is " << floorResult << endl;
	cout << endl;
	cout << "The power you would take 2 in order to get 512 is: " << result << endl;

	return 0;
}