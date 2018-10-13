/***************************************************************
Problem: Recursion Assignment
Question: (Print the characters in a string recursively) Write a
recursive function that displays a string reversely on the 
console using the following header:
Name: Alejandro Armas
ID: 1433110
Date: 10/9/18
Status: complete
****************************************************************/

#include <iostream>
#include <sstream>

using namespace std;

void reverseDisplay(const string & s) 
{

	if (s.size() <= 1) {
		cout << s << endl;
	}
	else 
	{
		cout << s.at(s.size() - 1);
		(reverseDisplay(s.substr( 0 , s.size() - 1)));
	}
	
}

int main() {

	string againString,
		statement;

	char again;

	do
	{

	cout << "Please enter a string, and I will display it backwards." 
		<< endl;

	getline(cin, statement);

	reverseDisplay(statement);

	cout << "Would you like to enter another statement ? (Y / N)"
		<< endl;

	getline(cin, againString);

	stringstream(againString) >> again;

	} while (toupper(again) == 'Y');

	return 0;
}