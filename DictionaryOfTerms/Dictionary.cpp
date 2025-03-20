#include "Dictionary.h"

void Dictionary::addDefinition(string word, string definition)
{
	dictionary[word] = definition;
}

string Dictionary::getDefinition(string word) const
{
	if (dictionary.find(word) == dictionary.end())
	{
		return "NOT FOUND";
	}
	else {
		return dictionary.at(word);
	}
}

void Dictionary::printAllDefinitions() const
{
	if (dictionary.empty())
	{
		cout << "Dictionary is currently empty!" << endl;
	}
	else {
		cout << "All definitions: " << endl;
		//map<string, string>::iterator i;
		for (auto i = dictionary.begin(); i != dictionary.end(); i++)
		{
			cout << i->first << "\n\tDefinition: " << i->second << endl;
		}
	}
}