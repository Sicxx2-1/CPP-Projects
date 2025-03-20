#include <iostream>
#include <string>
#include <fstream>
#include "Ownership.h"
using namespace std;

void timeEstimator(string subFeature, ofstream& file);
void timeEstimatorCsv(string subfeature, string ownerName, string ownerFeature, ofstream& csvFile);

int main()
{
	
	vector <string> subFeatures;
	vector <int> assets;
	string ownerName;
	string ownerFeature;
	string estimateAnswer;
	ofstream outputFile;
	ofstream csvFile;
	cout << "Please enter the Feature: " << endl;
	getline(cin, ownerFeature);
	cout << "Please enter your Name: " << endl;
	getline(cin, ownerName);
	Owner featureOwner(ownerName, ownerFeature);
	
	int input;
	cout << "How many subfeatures do you have?: " << endl;
	cin >> input;
	cin.ignore();

	if (input <= 0)
	{
		cout << "Exiting the application, 0 or invalid number of assets introduced!" << endl;
		return 1;
	}
	else {
		for (int i = 0; i < input; i++)
		{
			string tempName;
			cout << "Enter name of sub-feature no." << i << endl;
			getline(cin, tempName);
			subFeatures.push_back(tempName);
		}

		for (int i = 0; i < input; i++)
		{
			int num;
			cout << "Enter how many assets you have for " << subFeatures[i] << ": " << endl;
			cin >> num;
			assets.push_back(num);
		}
	}
	cout << endl << endl;
	outputFile.open("output.txt");
	csvFile.open("feature_ownership_report.csv");
	if (!outputFile)
	{
		cout << "Error opening the file for writing!" << endl;
		return 1;
	}
	if (!csvFile) {
		cout << "Error opening CSV file for writing!\n";
		return 1;
	}

	csvFile << "Feature Owner,Feature Name,Subfeature,Rarity,Number of Assets,Scripted Time (hrs),Unscripted Time (hrs),Total Time (hrs)\n";
	featureOwner.countPrintAssets(subFeatures, assets, outputFile);
	cout << endl << endl << endl;
	cout << "Would you like to continue and calculate time estimates? (yes/no)" << endl;
	cin.ignore();  // Clear leftover newline character
	getline(cin, estimateAnswer);

	while (true)  // Infinite loop, exits on condition
	{
		string subfeature;
		cout << "Tell me which subfeature you would like to do a time estimate for (type no to exit): " << endl;

		getline(cin, subfeature);

		if (subfeature == "no")
			break;  // Exit the loop if the user types "no"

		if (subfeature.empty())  // If input is empty, restart the loop without processing
			continue;

		//timeEstimator(subfeature, outputFile);
		timeEstimatorCsv(subfeature, ownerName, ownerFeature, csvFile);
	}
	outputFile.close();
	csvFile.close();
	return 0;
}

void timeEstimator(string subfeature, ofstream& file)
{
	double numOfAssets;
		if (subfeature == "Holosprays")
		{
			double unscriptedWork = 0;
			double globalWork = 0.11;
			double perAsset = 0.26;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Intro Quips")
		{
			double unscriptedWork = 0;
			double globalWork = 0;
			double perAsset = 0.35;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Kill Quips")
		{
			double unscriptedWork = 0;
			double globalWork = 0;
			double perAsset = 0.27;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Legend Skins (Common/Rare)")
		{
			double unscriptedWork = 0;
			double globalWork = 0;
			double perAsset = 0.41;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Legend Skins (Epic)")
		{
			double unscriptedWork = 0.5;
			double globalWork = 0;
			double perAsset = 1.57;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Legend Skins (Legendary)")
		{
			double unscriptedWork = 2;
			double globalWork = 0;
			double perAsset = 3.13;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Loading Screens")
		{
			double unscriptedWork = 0;
			double globalWork = 0;
			double perAsset = 0.12;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Skydive Emotes")
		{
			double unscriptedWork = 0;
			double globalWork = 0;
			double perAsset = 0.55;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Standing Emotes")
		{
			string rarity;

			while (true) // Loop until user types "skip"
			{
				cout << "Which rarity? (Rare, Epic, Legendary, Mythic) or type 'skip' to continue: ";
				getline(cin, rarity);

				if (rarity == "skip")  // Allow user to exit loop
					break;

				double unscriptedWork = 1;
				double globalWork = 0.2;
				double perAsset = 0.0;

				if (rarity == "rare") perAsset = 2.01;
				else if (rarity == "epic") perAsset = 2.01;
				else if (rarity == "legendary") perAsset = 2.16;
				else if (rarity == "mythic") perAsset = 2.08;
				else {
					cout << "Invalid rarity. Please enter a valid rarity or type 'skip' to continue.\n";
					continue; // Restart the loop
				}

				int numOfAssets;
				cout << "How many assets for " << rarity << "? ";
				cin >> numOfAssets;
				cin.ignore();  // Clear buffer after cin

				double scripted = (numOfAssets * perAsset) + globalWork;
				double unscripted = numOfAssets * unscriptedWork;
				double total = scripted + unscripted;

				// Print results
				cout << "Subfeature-> " << subfeature << endl;
				cout << "Rarity: " << rarity << endl;
				cout << "Scripted testing time: " << scripted << " hrs" << endl;
				cout << "Unscripted time: " << unscripted << " hrs" << endl;
				cout << "Total: " << total << " hrs" << endl;

				// Write to file
				file << "Subfeature-> " << subfeature << endl;
				file << "Rarity: " << rarity << endl;
				file << "Scripted testing time: " << scripted << " hrs" << endl;
				file << "Unscripted time: " << unscripted << " hrs" << endl;
				file << "Total: " << total << " hrs" << endl;
			}
			}
		else if (subfeature == "Stickers")
		{
			double unscriptedWork = 0;
			double globalWork = 0.2;
			double perAsset = 0.3;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Weapon Charms")
		{
			double unscriptedWork = 0;
			double globalWork = 0.03;
			double perAsset = 0.72;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Weapon Skins (Common/Rare)")
		{
			double unscriptedWork = 0;
			double globalWork = 0;
			double perAssetManual = 0.18;
			double perAssetAuto = 0.41;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = ((numOfAssets * perAssetManual) + (numOfAssets * perAssetAuto)) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
		}
		else if (subfeature == "Weapon Skins (Epic)")
		{
			double unscriptedWork = 0;
			double globalWork = 0;
			double perAssetManual = 0.18;
			double perAssetAuto = 0.41;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = ((numOfAssets * perAssetManual) + (numOfAssets * perAssetAuto)) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;

		}
		else if (subfeature == "Weapon Skins (Legendary)")
		{
			double unscriptedWork = 1;
			double globalWork = 0;
			double perAssetManual = 0.68;
			double perAssetAuto = 0.41;
			cout << "How many assets do you have?" << endl;
			cin >> numOfAssets;
			double scripted = ((numOfAssets * perAssetManual) + (numOfAssets * perAssetAuto)) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;
			cout << "Subfeature-> " << subfeature << endl;
			cout << "Scripted testing time: " << scripted << " hrs" << endl;
			cout << "Unscripted time: " << unscripted << " hrs" << endl;
			cout << "Total: " << total << " hrs" << endl;
			file << "Subfeature-> " << subfeature << endl;
			file << "Scripted testing time: " << scripted << " hrs" << endl;
			file << "Unscripted time: " << unscripted << " hrs" << endl;
			file << "Total: " << total << " hrs" << endl;
			
		}
}

void timeEstimatorCsv(string subfeature, string ownerName, string ownerFeature, ofstream& csvFile) {
	double numOfAssets;

	if (subfeature == "Holosprays") {
		double unscriptedWork = 0;
		double globalWork = 0.11;
		double perAsset = 0.26;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}

	else if (subfeature == "Intro Quips") {
		double unscriptedWork = 0;
		double globalWork = 0;
		double perAsset = 0.35;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}

	else if (subfeature == "Kill Quips") {
		double unscriptedWork = 0;
		double globalWork = 0;
		double perAsset = 0.27;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}

	else if (subfeature == "Legend Skins (Common/Rare)") {
		double unscriptedWork = 0;
		double globalWork = 0;
		double perAsset = 0.41;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}

	else if (subfeature == "Legend Skins (Epic)") {
		double unscriptedWork = 0.5;
		double globalWork = 0;
		double perAsset = 1.57;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}

	else if (subfeature == "Legend Skins (Legendary)") {
		double unscriptedWork = 2;
		double globalWork = 0;
		double perAsset = 3.13;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}

	else if (subfeature == "Loading Screens") {
		double unscriptedWork = 0;
		double globalWork = 0;
		double perAsset = 0.12;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}

	else if (subfeature == "Skydive Emotes") {
		double unscriptedWork = 0;
		double globalWork = 0;
		double perAsset = 0.55;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}
	else if (subfeature == "Standing Emotes") {
		string rarity;
		while (true) {
			cout << "Which rarity? (Rare, Epic, Legendary, Mythic) or type 'skip' to continue: ";
			getline(cin, rarity);

			if (rarity == "skip")
				break;

			double unscriptedWork = 1;
			double globalWork = 0.2;
			double perAsset = 0.0;

			if (rarity == "Rare") perAsset = 1.98;
			else if (rarity == "Epic") perAsset = 2.01;
			else if (rarity == "Legendary") perAsset = 2.16;
			else if (rarity == "Mythic") perAsset = 2.08;
			else {
				cout << "Invalid rarity. Please enter a valid rarity or type 'skip' to continue.\n";
				continue;
			}

			cout << "How many assets for " << rarity << "? ";
			cin >> numOfAssets;
			cin.ignore();

			double scripted = (numOfAssets * perAsset) + globalWork;
			double unscripted = numOfAssets * unscriptedWork;
			double total = scripted + unscripted;

			csvFile << ownerName << "," << ownerFeature << "," << subfeature << "," << rarity << ","
				<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
		}
		}

	else if (subfeature == "Stickers") {
		double unscriptedWork = 0;
		double globalWork = 0.2;
		double perAsset = 0.3;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}

	else if (subfeature == "Weapon Charms") {
		double unscriptedWork = 0;
		double globalWork = 0.03;
		double perAsset = 0.72;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = (numOfAssets * perAsset) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
	}
	else if (subfeature == "Weapon Skins (Common/Rare)") {
		double unscriptedWork = 0;
		double globalWork = 0;
		double perAssetManual = 0.18;
		double perAssetAuto = 0.41;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = ((numOfAssets * perAssetManual) + (numOfAssets * perAssetAuto)) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
			}

	else if (subfeature == "Weapon Skins (Epic)") {
		double unscriptedWork = 0;
		double globalWork = 0;
		double perAssetManual = 0.18;
		double perAssetAuto = 0.41;

		cout << "How many assets do you have?" << endl;
		cin >> numOfAssets;
		cin.ignore();

		double scripted = ((numOfAssets * perAssetManual) + (numOfAssets * perAssetAuto)) + globalWork;
		double unscripted = numOfAssets * unscriptedWork;
		double total = scripted + unscripted;

		csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
			<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
			}
	else if (subfeature == "Weapon Skins (Legendary)") {
				double unscriptedWork = 1;
				double globalWork = 0;
				double perAssetManual = 0.68;
				double perAssetAuto = 0.41;

				cout << "How many assets do you have?" << endl;
				cin >> numOfAssets;
				cin.ignore();

				double scripted = ((numOfAssets * perAssetManual) + (numOfAssets * perAssetAuto)) + globalWork;
				double unscripted = numOfAssets * unscriptedWork;
				double total = scripted + unscripted;

				csvFile << ownerName << "," << ownerFeature << "," << subfeature << ",N/A,"
					<< numOfAssets << "," << scripted << "," << unscripted << "," << total << "\n";
					}

	else {
		cout << "Unknown subfeature! Skipping...\n";
	}
}