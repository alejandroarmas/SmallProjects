#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

void printNumbers(int x) {

	int first = 1,
		second = 4;

		for (int i = 0; i < x; i++) {

			int third = first + second;

			cout << second;

			(i == (x - 1)) || (cout << ", ");

			first = second;

			second = third;
		}

	cout << "." << endl;
}

int main() {

	string input;
	int inputI;

	cout << "Please enter an integer" << endl;

	getline(cin, input);

	stringstream(input) >> inputI;

	printNumbers(inputI);

	return 0;
}
