#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <string> names;
	vector <double> weights;


	for (int i = 0; i < 5; i++)
	{
		string input;
		double weightInput;
		cout << "Tell me a person's name" << endl;
		getline(cin, input);
		names.push_back(input);
		cout << "Tell me how much " << input << " weighs" << endl;
		cin >> weightInput;
		weights.push_back(weightInput);
		cin.get();

	}

	for (int j = 0; j < 5; j++)
	{
		cout << names[j] << " weighs " << weights[j] << " lbs" << endl;
	}


	return 0;

}