#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main()
{
	queue<string> names;
	names.push("John");
	names.push("Sally");
	names.push("Bob");
	names.push("Sam");
	names.push("Ali");
	names.push("Karen");


	while (!names.empty())
	{
		cout << names.front() << " has been removed!" << endl;
		names.pop();
	}

	return 0;
}