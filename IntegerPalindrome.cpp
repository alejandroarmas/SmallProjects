/***************************************************************
Problem: Palindrome Integer
/return the reversal of an integer,
//i.e., flip (456) returns 654.
Use the flip function to implement isPalindrome. A number is a
palindrome if its reversal
is the same as itself. For example, flip(3456) displays 6543..
b) Write a test program that prompts the user to enter an
integer and reports whether the integer
is a palindrome.
Name: Alejandro Armas
ID: 1433110
Date: 9/17/18
Status: complete
****************************************************************/
#include <iostream>
#include <sstream>
using namespace std;

int flip(int number) {
	int r = 0;

	while (number > 0) {
		r = r * 10 + number % 10;
		number = number / 10;
	}

	return r;
}

bool isPalindrome(int number) {
	return(number == flip(number));
}

int main() {
	string numberString;
	int number;

	cout << "Enter number and I will let you know"
		<< " if Palindrome or not" << endl;

	getline(cin, numberString);
	stringstream(numberString) >> number;

	cout << "Your number " << number 
		<< " " << (isPalindrome(number) ?  
		"is a Palindrome!" : "is not a Palindrome!");

	cout << endl;

	return 0;

}
