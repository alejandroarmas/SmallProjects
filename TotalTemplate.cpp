/***************************************************************
Problem: Assignment Minimum/Maximum Template
Question: Write a template for a function called total. The
function will get a list of values and return the running total
of the values and the maximum and minimum value. The number of 
values is unknown beforehand.Test the template in a simple driver 
program that sends values of various types as arguments and 
displays the results

Name: Alejandro Armas
ID: 1433110
Date: 11/5/18
Status: complete
****************************************************************/

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

// prints the sequence inserted and calculates max, min, total
template <class T>
string total(const vector <T>& listOfValues) {

	T min = listOfValues.at(0),
		total = 0,
		max = 0;
	
	stringstream ss;
	string value;

	cout << "For the sequence of numbers : ";

	for (const T& i : listOfValues) {
		cout << i << " ";
		total += i;
		(i < min) && (min = i);
		(i > max) && (max = i);
	}

	cout << endl;

	ss << "SUM" << total << "|MAX" << max 
		<< "|MIN" << min;

	ss >> value;
	return value;
}

template <class T>
void save(const T& data) {

	string fileName;
	fstream newFile;

	cout << "Please name file." << endl;
	getline(cin, fileName);

	fileName.append(".txt");

	newFile.open(fileName, ios::out | ios::app);

	cout << "Saving..." << endl;

	if (newFile) {
		
		newFile << data << "\n";
	}
	else cout << "FILE FAILED";

	cout << "Done!" << endl;
	newFile.close();
}

int main() {

	vector <double> myVector;

	string userInput,
		finalString;
	double temp;
	char option;

	do {

		cout << "Please input a set of numbers : " << endl;

		getline(cin, userInput);
		stringstream ss(userInput);

		while (ss >> temp) {
			myVector.push_back(temp);
		}

		finalString = total(myVector);

		cout << finalString << endl;

		cout << "Would you like to save this information?" << endl;

		getline(cin, userInput);

		stringstream(userInput) >> option;

		if (toupper(option) == 'Y') {
			save(finalString);
		}

		myVector.clear();

		cout << "Would you like to add another sequence?" << endl;

		getline(cin, userInput);

		stringstream(userInput) >> option;

	} while (toupper(option) == 'Y');

	return 0;
}