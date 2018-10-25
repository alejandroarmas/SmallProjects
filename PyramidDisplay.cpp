#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

const string NUMBERS("9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9");

void doPyramid(int width) 
{    
	for (int i = 1; i <= width; i++)
	{
		cout << setw(((2 * width) - 3) + (2 * i))
			 << NUMBERS.substr((18 - (2 * i)), (4 * i) - 3)
			<< endl;
	}
}

int main() {

	string input;

	int width = 0;

	cout << "Pyramid Builders International" <<
		endl << "Enter the number of lines (1-9): ";

	getline(cin, input);

	stringstream(input) >> width;

	doPyramid(width);

	return 0;
}
