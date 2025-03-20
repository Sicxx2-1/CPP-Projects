#include <iostream>
#include <string>
using namespace std;

int main()
{
	string adjective1;
	string girlsName;
	string adjective2;
	string occupation1;
	string placeName;
	string clothing; 
	string hobby;
	string adjective3; 
	string occupation2; 
	string boysName;
	string mansName;


	cout << "Tell me an adjective" << endl;
	getline(cin,adjective1);

	cout << "Tell me a girl's name" << endl;
	getline(cin, girlsName);

	cout << "Tell me a second adjective" << endl;
	getline(cin, adjective2);

	cout << "Tell me a occupation" << endl;
	getline(cin, occupation1);

	cout << "Tell me a place name" << endl;
	getline(cin, placeName);

	cout << "Tell me a piece of clothing but in plural" << endl;
	getline(cin, clothing);

	cout << "Tell me a hobby" << endl;
	getline(cin, hobby);

	cout << "Tell me the last adjective" << endl;
	getline(cin, adjective3);

	cout << "Tell me another occupation" << endl;
	getline(cin, occupation2);

	cout << "Tell me a boy name" << endl;
	getline(cin, boysName);

	cout << "Tell me a man name" << endl;
	getline(cin, mansName);


	cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 << " " << occupation1 << " in the Kingdom of " << placeName << 
	".She loved to wear " << clothing << " and " << hobby << ".She wanted to marry the " << adjective3 << " " << occupation2 << " named " << boysName << 
	" but her father, King " << mansName << " forbid her from seeing him." << endl;
 

	return 0;
}