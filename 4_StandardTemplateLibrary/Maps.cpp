#include "Maps.h"

int main() {
	/* LESSON 4.16 
	map <string, int> ages;

	ages["Juan"] = 21;
	ages["Mike"] = 40;
	ages["Sean"] = 7000;

	ages["Mike"] = ages["Mike"] + 2;

	ages.insert(make_pair("Peter", 80));

	for (map<string, int>::iterator itt = ages.begin(); itt != ages.end(); itt++) {
		cout << itt->first << " : " << itt->second << endl;
	}

	for (map<string, int>::iterator itt = ages.begin(); itt != ages.end(); itt++) {
		pair<string, int> age = *itt;

		cout << age.first << " : " << age.second << endl;f
	}
	*/

	/* LESSON 4.17
	map<int, Person> people;
	people[1] = Person("Juan", 21);
	people[2] = Person("Mike", 28);
	people[3] = Person("Sean", 9001);

	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(55, Person("Sue", 42)));

	for (map<int, Person>::iterator itt = people.begin(); itt != people.end(); itt++) {
		cout << itt->first << " : " << flush;
		itt->second.print();
	}
	*/

	/* LESSON 4.18 
	map<Person, int> people;
	people[Person("Juan", 21)] = 1;
	people[Person("Mike", 28)] = 2;
	people[Person("Mike", 30)] = 3;
	people[Person("Sean", 9001)] = 4;

	people.insert(make_pair(Person("Bob", 45), 5));
	people.insert(make_pair(Person("Sue", 42), 6));

	for (map<Person, int>::iterator itt = people.begin(); itt != people.end(); itt++) {
		
		itt->first.print();
		cout << " : " << itt->second << endl << endl;
	}
	*/

	cout << "Exiting program" << endl;
	return 0;
}