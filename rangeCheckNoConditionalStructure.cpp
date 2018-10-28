//range check numbers in vector using no if/switch/ ternatory (using short curcuit evaluation and boolean expressions)
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

const int RANGE_MIN = 10;
const int RANGE_MAX = 100;

int main()
{
	string statement;
	int number = 0;
	vector<bool> vect(101, false);
	//vector of 101 falses. because index starts at 0

	cout << "Please enter a set of numbers that are between 10 and 100." << endl;
	cout << "==> ";
	getline(cin, statement);

	stringstream ss(statement);

	while (ss >> number)
	{
		//if number is within range: set index at that position to true;
		//if not within range it will endup setting true to index location 0 which we do not care about

		vect.at ( (number >= RANGE_MIN && number <= RANGE_MAX) * number) = true;
	}

	// now all what we need is to print the numbers that we have (marked with true)
	// and since we count sequentially, these number will be printed in order 
	for (int i = RANGE_MIN; i < vect.size(); i++)
	{
		// short-circuit-evaluation will not look at the right-side (hence cout) if left-side is false

		(vect.at (i) != false )&&( cout << vect.at (i) << " ");
	}

	return 0;
}
