#include <iostream>
#include <string>
#include <map>
using namespace std;



int main()
{

	map<string, string> contacts;

	contacts["John"] = "313 - 555 - 5555";
	contacts["Bob Robinson"] = "734 - 555 - 5050";
	contacts["Sally snorkel"] = "810 - 555 - 8888";

	for (pair<string, string> element : contacts)
	{
		cout << element.first << ": " << element.second << endl;
	}

	return 0;
}