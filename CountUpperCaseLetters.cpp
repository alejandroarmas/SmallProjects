/***************************************************************
Problem: Assignment Loops Lab : Count Uppercase Letters
Question: Write a program that prompts the user to enter a string
and displays the number of the uppercase letters in the string
Name: Alejandro Armas
ID: 1433110
Date: 7/6/2018
Status: complete
****************************************************************/

#include <iostream>
#include <sstream>
#include <cctype>


using namespace std;

int main()
{
	string againString,
	statement;
	
	int capitalCount = 0;
		
	char again;

	do
	{
		
		cout << "Enter any statement, and I will let you know" <<
			" how many uppercase letters there are" << endl;

		getline(cin, statement);

		for (int i = 0, n = statement.size(); i < n; i++) {

			capitalCount += isupper(statement.at(i));
		}

		cout << "The total number of uppercase letters was "
			<< capitalCount << endl << endl
			<< "Would you like to enter another statement ? (Y / N)"
			<< endl;

		getline(cin, againString);

		stringstream(againString) >> again;

	} while (toupper(again) == 'Y');

	return 0;

}
