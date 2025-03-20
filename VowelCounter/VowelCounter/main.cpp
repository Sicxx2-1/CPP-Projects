#include <iostream>
#include <string>
using namespace std;

void vowelCounter(string sentence);
void frequentVowel(string sentence);

int main()
{
	string userSentence;
	cout << "Please enter a sentece" << endl;
	getline(cin, userSentence);

	vowelCounter(userSentence);
	frequentVowel(userSentence);

	return 0;
}


void vowelCounter(string sentence)
{
	int aCounter = 0;
	int eCounter = 0;
	int iCounter = 0;
	int oCounter = 0;
	int uCounter = 0;
	int totalcounter = 0;

	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] == 'A' || sentence[i] == 'a')
		{
			aCounter++;
			totalcounter++;
		}
		else if (sentence[i] == 'E' || sentence[i] == 'e')
		{
			eCounter++;
			totalcounter++;
		}
		else if (sentence[i] == 'I' || sentence[i] == 'i')
		{
			iCounter++;
			totalcounter++;
		}
		else if (sentence[i] == 'O' || sentence[i] == 'o')
		{
			oCounter++;
			totalcounter++;
		}
		else if (sentence[i] == 'U' || sentence[i] == 'u')
		{
			uCounter++;
			totalcounter++;
		}
	}
	cout << "Total vowels identified: " << totalcounter << endl;
	cout << "A vowels number: " << aCounter << endl;
	cout << "E vowels number: " << eCounter << endl;
	cout << "I vowels number: " << iCounter << endl;
	cout << "O vowels number: " << oCounter << endl;
}

void frequentVowel(string sentence)
{
	int vowelCounts[5] = { 0, 0, 0, 0, 0 };  // Index 0 = 'a', 1 = 'e', 2 = 'i', 3 = 'o', 4 = 'u'
	char vowels[5] = { 'A', 'E', 'I', 'O', 'U' };

	// Count vowels
	for (int i = 0; i < sentence.size(); i++)
	{
		char ch = toupper(sentence[i]);  // Convert to uppercase for easy comparison

		if (ch == 'A') vowelCounts[0]++;
		else if (ch == 'E') vowelCounts[1]++;
		else if (ch == 'I') vowelCounts[2]++;
		else if (ch == 'O') vowelCounts[3]++;
		else if (ch == 'U') vowelCounts[4]++;
	}

	// Find the most frequent vowel
	int maxIndex = 0;
	for (int i = 1; i < 5; i++)  // Start from 1 because we assume index 0 is max initially
	{
		if (vowelCounts[i] > vowelCounts[maxIndex])
		{
			maxIndex = i;
		}
	}

	cout << "The most frequent vowel is: " << vowels[maxIndex] << " (Count: " << vowelCounts[maxIndex] << ")" << endl;
}


