/***************************************************************
Problem: Making Decisions: Internet Service Provider
Question: Write a program that calculates a customer’s monthly bill.
It should ask which package the customer has purchased and how many hours
were used. It should then display the total amount due.
Name: Alejandro Armas
ID: 1433110
Date: 6/28/2018
Status: complete
****************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

const double PACKAGE_A = 19.95,
PACKAGE_B = 14.95,
PACKAGE_C = 9.95,
HOURLY_RATE_C = 2.00,
HOURLY_RATE_B = 1.00;

const int MAX_HOURS_B = 20,
MAX_HOURS_C = 10;

int main()
{
	int package,
		maxHours,
		hours;


	string packageButString,
		hoursButString,
		monthButString;


	


	cout << "Welcome to the Internet Service Calculator!!" << endl 

	    << "Select Your Internet Package!" << endl << endl
		<< " 1. Super Fast Unlimited Plan" << endl
		<< " 2. Fast But Not Super Fast Internet Plan" << endl
		<< " 3. Atleast You Have Wifi Internet Plan" << endl
		<< " 4. Quit This Program" << endl << endl
		<< " Enter your choice: ";

	getline(cin, packageButString);
	stringstream(packageButString) >> package;

	// input of 1-3 will resume program, else it will close

	switch (package) {

	case 1:;
	
	case 2:;

	case 3:


		cout << " Please enter your month of service" << endl;
		getline(cin, monthButString);


		cout << "How many hours of service did you use?" << endl;
		getline(cin, hoursButString);
		stringstream(hoursButString) >> hours;

		//calculations of internet package price

		double priceA = PACKAGE_A,

			priceB = (hours > MAX_HOURS_B) ?
			(PACKAGE_B + HOURLY_RATE_B * (hours - MAX_HOURS_B)) : PACKAGE_B,

			priceC = (hours > MAX_HOURS_C) ?
			(PACKAGE_C + HOURLY_RATE_C * (hours - MAX_HOURS_C)) : PACKAGE_C;

		switch (toupper(monthButString.at(2))) // obtains second third letter of month
		
		{

		case 'B': maxHours = 672; // hours in February
			break;

		case 'P':;

		case 'V': maxHours = 720;
			break;

		case 'R':;
			

		case 'N':
			switch (toupper(monthButString.at(1))) // second letter of each month 
			{
			case 'P':;

			case 'U': maxHours = 720;
				break;

			default: maxHours = 744;

			};

		default: maxHours = 744;

		}

		if (maxHours > hours) {

			cout << fixed << setprecision(2);

			switch (package) {

			case 1: 
	cout << "You will pay a total of " << priceA << "$" << endl;
				break;

			case 2:
	cout << "You will pay a total of " << priceB <<
	"$ for your internet package" << endl << endl;
				
				if (hours > 20) {

	cout << "You could have saved " << priceB - priceA << 
	"$ switching to our best Package" << endl;
				}

				break;

			case 3:

	cout << "You will pay a total of " << priceC <<
	"$ for your internet package" << endl << endl;
				
				if (hours > 10) {

	cout << "You could have saved " << priceC - priceA <<
	"$ switching to our best Package" << endl;

				}
				break;
			}

			 
		}

		else 

	cout << "It is impossible to have Internet Service " <<
	"for over " << maxHours << " hours throughout "
	<< monthButString << endl;
		
		
	};

	return 0;
}
