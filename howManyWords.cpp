#include <iostream>
#include <sstream>

using namespace std;

void words(const string &statement)
{
	int count = 0;
	string word;
	stringstream ss(statement);

	while (ss >> word) {
		count++;
	}

	cout << "String contains " << count << " words." << endl;
}

int main()
{
	string statement,
		againString;

	char again;

	do
	{

		cout << "Enter a string and I will tell you how many words it contains" << endl;

		getline(cin, statement);

		words(statement);

		cout << "Would you like to power another string ? (Y / N)"
			<< endl;

		getline(cin, againString);

		stringstream(againString) >> again;

	} while (toupper(again) == 'Y');


	return 0;
}