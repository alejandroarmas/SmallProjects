/***************************************************************
Problem: Assignment 2.1

Question: Write a program that asks the user for his/her name. The program will
ask the user to enter 3 character values: a letter, a number, and a
symbol (such as: B, 6, and #).
The program will write to the screen the name and "– Character
Formatting". Followed by a message
Followed by the values in original form, decimal, hex, and octal
notation. The output should be written in the format shown below.

Name: Alejandro Armas
ID: 1433110
Date: 08/28/18
Status: complete 
****************************************************************/
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <bitset>

using namespace std;


int main()
{
	string name,
		statement;

	char letter,
		symbol;

	int number;

	cout << "What is your name?" << endl;

	getline(cin, name);

	cout << "Ok " << name << ", please input a letter, number,"<<
		"and a symbol each seperated by a space"<< endl;

	getline(cin, statement);

	stringstream(statement) >> letter >> number >> symbol;


	cout << name << " - Character Formatting" << endl << endl <<

		"Letter = " << letter << "     Number = " << number <<
		"     Symbol = " << symbol <<
		endl<< "__________________________________________"<< endl;


	cout << "Decimal " << setw(6) << dec << uppercase << showbase <<
		static_cast<int>(letter) << setw(10)  << number <<
		setw(10)  << static_cast<int>symbol << endl;

	cout << "Hex " << setw(10) << hex << static_cast<int>(letter) <<
		setw(10)  << number << 
		setw(10)  << static_cast<int>(symbol) << endl;

	cout << "Octal " << setw(8) << oct << (static_cast<int>(letter)) <<
		setw(10)  << number << 
		setw(10)  << (int)symbol << endl;

	cout << "Binary " << setw(7) << bitset<8>(static_cast<int>(letter)) <<
		setw(10) << bitset<8>(number) <<
		setw(10) << bitset<8>(static_cast<int>(symbol)) << endl;

	return 0;
}

