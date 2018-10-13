/***************************************************************
Problem: Recursion Assignment
Question: (Occurances of a specified character in a string) Write 
a recursive function which finds the number of occurances of a 
specified letter in a string using the following function header
Name: Alejandro Armas 
ID: 1433110
Date: 10/9/18
Status: complete
****************************************************************/

#include <iostream>
#include <sstream>

using namespace std;

int count(const string & s, char a) {

	if (s.size() == 0)
		return 0;

	else if (toupper(s.at(0)) == a)
		return 1 + count(s.substr(1), toupper(a));
	else
		return count(s.substr(1), toupper(a));
}

int main() {
	
	string againString,
		statement,
		word;

	char again,
		letter;

	do
	{

	cout << "Please enter a word and a letter seperated by space" << endl
		<< "I will tell you how many times that letter shows up" << endl;

	getline(cin, statement);

	stringstream(statement) >> word >> letter;

	cout << "There are " << count(word, toupper(letter)) 
		<< " " << letter << "'s in " << word << endl;

	cout << "Would you like to enter another statement ? (Y / N)"
		<< endl;

	getline(cin, againString);

	stringstream(againString) >> again;

} while (toupper(again) == 'Y');

	return 0;
}