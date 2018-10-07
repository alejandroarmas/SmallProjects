/***************************************************************
Problem: Phone keypads
Write a test program that prompts the user to enter a phone
number as a string. The input number may
contain letters. The program translates a letter (uppercase or
lowercase) to a digit and leaves all other
characters intact. Here is a sample run of the program:
Name: Alejandro Armas
ID: 1433110
Date: 9/17/18
Status: complete
****************************************************************/
#include <iostream>
#include <sstream>

using namespace std;

int getNumber(char uppercaseLetter) {

	return ((uppercaseLetter - 'A') / 3) + 2 
		- (uppercaseLetter >= 'S') - (uppercaseLetter >= 'Z');
}

int main() {

	string phoneNumber,
		digits;

	cout << " Hello please enter a phone number as a string:" << endl;

	getline(cin, phoneNumber);


	for (int i = 0; i < phoneNumber.size(); i++)
	{
		digits += (isalpha(phoneNumber.at(i)) ?
			('0' + getNumber(toupper(phoneNumber.at(i)))) :
			phoneNumber.at(i));
	}

	cout << digits << endl;

	return 0;
}