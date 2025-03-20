#include <iostream>
using namespace std;


void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();
void noChange(double num);

int main()
{
	noConst();
	cout << endl;

	cp2ncd();
	cout << endl;

	ncp2cd();
	cout << endl;

	cp2cd();
	cout << endl;

	const double* const myDouble = new double(240.20);
	noChange(*myDouble);


	return 0;

}


void noConst()
{
	cout << "In noConst" << endl;
	int* intPtr = new int(50);
	cout << "\torig value : " << *intPtr << endl;

	*intPtr = 100;
	cout << "\t changed data: " << *intPtr << endl;

	delete intPtr;


	intPtr = new int(125);
	cout << "\t new integer entirely: " << *intPtr << endl;

	delete intPtr;


}
void cp2ncd()
{
	cout << "In cp2ncd: " << endl;

	int* const intPtr = new int(100);
	cout << "\torig value is: " << *intPtr << endl;

	*intPtr = 250;

	cout << "\t new integer value: " << *intPtr << endl;
	delete intPtr;

}
void ncp2cd()
{
	cout << "In ncpd2cd" << endl;

	const int* intPtr = new int(500);
	cout << "\torig value: " << *intPtr << endl;
	delete intPtr;
	intPtr = new int(100);
	cout << "\tnew value: " << *intPtr << endl;
	delete intPtr;

}
void cp2cd()
{
	cout << "Inside cp2cd" << endl;
	const int* const intPtr = new int(100);
	cout << "\torig value: " << *intPtr << endl;

	delete intPtr;
}

void noChange(double num)
{
	const double* const doublePtr = new double(num);
	cout << "Value of the double pointer is: " << endl;
	cout << *doublePtr << endl;
	delete doublePtr;
}