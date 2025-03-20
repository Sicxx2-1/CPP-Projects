#include <iostream>
#include <string>

using namespace std;

void reverseString(string ogString);


int main()
{
	string userString;
	cout << "Write a string you want to get the reverse version of: " << endl;
	getline(cin, userString);

	reverseString(userString);

	return 0;
}


void reverseString(string ogString)
{
	string rev = ogString;
	reverse(rev.begin(), rev.end());
	cout << "Original string is: " << ogString << endl;
	cout << "Reversed string is: " << rev << endl;
	
	if (ogString == rev)
	{
		cout << "This word is a palindrome!" << endl;
	}

}