#include <iostream>
#include <sstream>

using namespace std;

double power(double base, int exponent)
{
	return (exponent <= 0) ? 1 : (base * power(base, --exponent));
}
	
int main()
{
	string statement,
		againString;

	double base = 0.0;

	int exponent = 0;

	char again;

	do
	{

		cout << "Enter a base then an exponent seperate by space" << endl;

		getline(cin, statement);

		stringstream(statement) >> base >> exponent;

		cout << power(base, exponent) << endl;

		cout << "Would you like to power another number ? (Y / N)"
			<< endl;

		getline(cin, againString);

		stringstream(againString) >> again;

	} while (toupper(again) == 'Y');


		return 0;
	}