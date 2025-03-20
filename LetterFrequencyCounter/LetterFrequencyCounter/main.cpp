#include <iostream>
#include <cctype>
#include <map>
#include <string>

using namespace std;

int main()
{
    string userAnswer;
    map<char, int> alphabet;

    cout << "Enter a sentence: ";
    getline(cin, userAnswer);

    // Convert all characters to lowercase
    for (char& letter : userAnswer) {
        letter = tolower(letter);
    }

    // Count occurrences of each letter
    for (char letter : userAnswer) {
        if (isalpha(letter)) {  // Ignore non-alphabet characters
            alphabet[letter]++;
        }
    }

    // Print letter frequency
    cout << "\nLetter Frequency:\n";
    for (const auto& pair : alphabet) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
