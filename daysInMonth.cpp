#include <iostream>
#include <sstream>

using namespace std;

int daysInMonth(string month)
{
	return 30 + (string("April June September November").find(month) != string::npos);
}

int main()
{
	string month,
		againString;

	char again;

	do
	{

		cout << "Enter a month and I will tell you how many days it contains" << endl;

		cout << "[Except February, and please capitalize and spell correctly]" << endl;

		getline(cin, month);

		cout << "There are " << daysInMonth(month) << " days in the month of " << month << endl;

		cout << "Would you like to power another string ? (Y / N)"
			<< endl;

		getline(cin, againString);

		stringstream(againString) >> again;

	} while (toupper(again) == 'Y');


	return 0;
}
