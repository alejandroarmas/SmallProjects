/***************************************************************
Problem: Swap Case
Question: Write a test program that prompts the user to enter a
string and invokes this function, and displays the
return value from this function.

Name: Alejandro Armas
ID: 1433110
Date: 9/17/18
Status: complete
****************************************************************/

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

string swapCase(string statementString)
{
	for (int i = 0; i < statementString.length(); i++)
	{
		statementString.at(i) =
			islower(statementString.at(i)) ?
			toupper(statementString.at(i)) :
			tolower(statementString.at(i));
	}
	return statementString;
}

int main()
{
	string againString;

	char again;

	do
	{
		string statementString;

		cout << " Enter any statement and I will change every"
			<< "case to it's opposite!" << endl;

		getline(cin, statementString);

		cout << swapCase(statementString);

		cout << endl << endl <<
			"Would you like to enter another string ? (Y / N)" << endl;

		getline(cin, againString);
		stringstream(againString) >> again;

	} while (toupper(again) == 'Y');

	return 0;
}
