/***************************************************************
Problem: Random Number Guessing Game
Question: Write a program that generates a random number between
1...100 and asks the user to guess what the number is. If the
user's guess is higher than the random number, the program
should display “Too high, try again”. If the user s guess is
lower than the random number, the program should display
“Too low, try again”. The program should use a loop that
repeats until the user correctly guesses the random number.

The program will keep a count of the number of guesses
that the user makes. When the user correctly guesses the
random number, the program should display the number of guesses.
Name: Alejandro Armas
ID: 1433110
Date: 9/13/18
Status: complete
****************************************************************/

#include <iostream>
#include <random>
#include <sstream>


using namespace std;

int main() {

	random_device rd;
	default_random_engine generator(rd());
	uniform_int_distribution<int> distribution(0, 100);
	int randomNumber = distribution(generator);

	int guess = -1,
		count = 1;

	string guessString;

	cout << "Welcome to the Random Number Generator!!" <<
		endl << "Try and guess the right number!" << endl;

	while (guess != randomNumber) {
		
		getline(cin, guessString);
		stringstream(guessString) >> guess;

		(guess == randomNumber)||(cout << ((guess < randomNumber) ?
			"Too Low! Try Again" : "Too High! Try again") << endl);

		count++;
	};

	cout << "Congratulations! You correctly guessed "
		<< randomNumber << ", You are very smart!" << endl
		<< "It took you only " << count << " tries!" << endl;

	return 0;
}
