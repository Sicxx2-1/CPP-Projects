#include <iostream>
#include <string>
using namespace std;

void wordCounter(string sentence);

int main()
{
	string userSentence;
	cout << "Enter a sentence to count the words for: " << endl;
	getline(cin, userSentence);


	return 0;
}


void wordCounter(string sentence)
{
	int wordCounter = 0;

	if ((sentence.begin(), sentence.end()) != " ")
	{
		wordCounter = 0;
	}



}