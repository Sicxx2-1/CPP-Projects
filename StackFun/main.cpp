#include <iostream>
#include <string>
#include <stack>
using namespace std;

void storeReverse(string original, stack<char>& reverseStack);
bool isPalindrome(string original);
void printResults(string original);

int main()
{
	string strArray[5];

	strArray[0] = "racecar";
	strArray[1] = "fudge";
	strArray[2] = "civic";
	strArray[3] = "bob";
	strArray[4] = "dog";

	for (string str : strArray)
	{
		printResults(str);
		cout << endl;
	}

	return 0;
}


void storeReverse(string original, stack<char>& reverseStack)
{
	for (char c : original)
	{
		reverseStack.push(c);
	}
}

bool isPalindrome(string original)
{
	stack<char> reverseStack;
	storeReverse(original, reverseStack);
	bool result = true;

	if (original.length() == reverseStack.size())
	{
		for (char c : original)
		{
			char currChar = reverseStack.top();
			if (currChar != c)
			{
				result = false;
				break;
			}
			reverseStack.pop();
		}
	}
	else
	{
		return false;
	}

	return result;
}

void printResults(string original)
{
	cout << "Is " << original << " a palindrome?\t"
		<< boolalpha << isPalindrome(original) << endl;
}