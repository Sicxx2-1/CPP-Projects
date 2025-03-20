#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <string> names;

	names.push_back("Andrei");
	names.push_back("Larisa");
	names.push_back("Pisulica");
	names.push_back("Sfantu Duh");
	names.push_back("Extrema Ascunsa");
	names.insert(names.begin() + 2, "John Baugh");
	names.pop_back();

	for (string name : names)
	{
		cout << name << endl;
	}

	return 0;
}