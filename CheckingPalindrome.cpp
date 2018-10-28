/***************************************************************
Problem: Assignment Loops Lab : Checking Palindromes
Question: Write a program that prompts the user to enter a string and checks whether or not if string is palindrome
Name: Alejandro Armas
ID: 1433110
Date: 7/6/2018
Status: complete
****************************************************************/

#include <iostream>
#include <sstream>


using namespace std;

int main()
{
	char again;

	string statement,
		againString;

	do
	{
		cout << "Enter any statement, and I will let you know " <<
			"if it is a palindrome or not" << endl;

		getline(cin, statement);

		string reverseStatement = "";

		for (int i = statement.size() - 1; i >= 0; --i)
		{
			reverseStatement += statement.at(i);
		}

		cout << (statement == reverseStatement ?
			"Yes that's a palindrome!"
			: "No thats not a palindrome" );


		cout << endl <<
			" Would you like to enter another statement ? (Y / N)"
			<< endl;

		getline(cin, againString);
		stringstream(againString) >> again;

	} while (toupper(again) == 'Y');


	return 0;

}
