#include "Vectors.h"

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int mainDup1() {
	/* LESSON 4.12 and 4.13
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	cout << strings[2] << endl;
	cout << strings.size() << endl;

	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}

	for (vector<string>::iterator itt = strings.begin(); itt != strings.end(); itt++) {
		cout << *itt << endl;
	}

	// Memory checking in 4.13, no code

	*/

	/* LESSON 4.14
	// Makes a vector of size 3 x 4
	vector< vector<int> > grid(3, vector<int>(4, 0));

	grid[1].push_back(8);

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}
	*/

	/* LESSON 4.15 
	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	list<int>::iterator itt = numbers.begin();
	itt++;
	numbers.insert(itt, 100);

	list<int>::iterator erritt = numbers.begin();
	erritt++;
	erritt = numbers.erase(erritt);

	for (list<int>::iterator itt = numbers.begin(); itt != numbers.end(); itt++) {
		cout << *itt << endl;
	}
	*/

	cout << "Ending program" << endl;
	return 0;
}