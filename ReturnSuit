#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

string suite(int n) {

	vector <string> suit = { "Invalid value", "Club", "Diamond", "Heart", "Spade" };

	return  suit.at((n > 0 && n < 5) * n);
}

int main() {

	string input,
		againString;
	int inputI = 0;

	char again;

	do {

	
	cout << "1 - Club, 2 - Diamond, 3 - Heart, 4 - Spade" << endl;


	getline(cin, input);

	stringstream(input) >> inputI;

	cout << suite(inputI) << endl;

	cout << "Would you like to power another string ? (Y / N)"
		<< endl;

	getline(cin, againString);

	stringstream(againString) >> again;

	} while (toupper(again) == 'Y');

	return 0;
}
