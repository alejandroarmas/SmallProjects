#include <iostream>
#include <sstream>
#include <vector>
#include <random>

using namespace std;

const int TABLES = 6;

template <class RandomAccessIterator, class URNG>
void shuffleClass(RandomAccessIterator first,
	RandomAccessIterator last, URNG&& g)
{
	for (auto i = (last - first) - 1; i>0; --i) {
		uniform_int_distribution<decltype(i)> d(0, i);
		swap(first[i], first[d(g)]);
	}
}

vector<string> converter(string team) {

	vector <string> myVector;
	string temp;

	stringstream ss(team);

	while (ss >> temp) {
		myVector.push_back(temp);
	}
	random_device rd;
	shuffleClass(myVector.begin(), myVector.end(),
		default_random_engine{ rd() });

	return myVector;
}

void displayTeam(const vector <string>& classRoster) {

	int studentsPerTeam = classRoster.size() / TABLES,
		remainingStudents = classRoster.size() % TABLES,
		z = 0,
		incrementor = 0;

	random_device rd;
	default_random_engine generator(rd());
	uniform_int_distribution<int> distribution(1, TABLES);
	
		 
	cout << endl;

	for (int i = 0; i < TABLES; i++) {
		
		cout << "Team " << i + 1 << endl << endl;

		for (int j = 0; j < studentsPerTeam; j++) {
			cout << classRoster.at(z) << " ";
			z++;
			incrementor = z;
		}
		cout << endl << endl;
		
	}
	(remainingStudents)&&(cout 
		<< "Remaining students go to " << endl << endl);

	for (int w = 0; w < remainingStudents; w++) {
		cout << classRoster.at(incrementor) << " "
			<< distribution(generator) << endl;
		incrementor++;
	}
	cout << endl;
}

int main() {

	vector <string> teamOne;

	string team1;

	cout << "Please enter names of students in lab seperate by space: " << endl;

	getline(cin, team1);

	teamOne = converter(team1);

	displayTeam(teamOne);
}
