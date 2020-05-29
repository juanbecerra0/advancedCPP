#include "Multimaps.h"

int main()
{
	/* LESSON 4.19 
	multimap<int, string> lookup;

	lookup.insert(make_pair(21, "Juan"));
	lookup.insert(make_pair(28, "Mike"));
	lookup.insert(make_pair(9002, "Chon"));

	for (multimap<int, string>::iterator itt = lookup.begin(); itt != lookup.end(); itt++) {
		cout << itt->first << " : " << itt->second << endl;
	}

	cout << endl;

	for (multimap<int, string>::iterator itt = lookup.find(28); itt != lookup.end(); itt++) {
		cout << itt->first << " : " << itt->second << endl;
	}

	cout << endl;

	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(28);

	for (multimap<int, string>::iterator itt = its.first; itt != its.second; itt++) {
		cout << itt->first << " : " << itt->second << endl;
	}

	cout << endl;
	*/

	/* LESSON 4.20 (nice)
	set<int> numbers;

	numbers.insert(10);
	numbers.insert(20);
	numbers.insert(30);
	numbers.insert(40);
	numbers.insert(50);

	for (set<int>::iterator itt = numbers.begin(); itt != numbers.end(); itt++) {
		cout << *itt << endl;
	}

	set<int>::iterator itFind = numbers.find(30);

	if (itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	}
	else {
		cout << "Not found" << endl;
	}

	if (numbers.count(30)) {
		cout << "Found" << endl;
	}
	else {
		cout << "Not found" << endl;
	}

	cout << endl;
	*/

	/* LESSON 4.21
	stack<Person> personStack;
	queue<Person> personQueue;

	personStack.push(Person("Juan", 21));
	personStack.push(Person("Mike", 28));
	personStack.push(Person("Chon", 31));

	// Screw it, I know how these work
	*/

	/* LESSON 4.22
	vector<Person> people;

	people.push_back(Person("Juan1", 21));
	people.push_back(Person("Juan4", 24));
	people.push_back(Person("Juan2", 22));
	people.push_back(Person("Juan5", 25));
	people.push_back(Person("Juan3", 23));

	// friend keyword helps access private member variables of a class
	sort(people.begin(), people.end());

	for (int i = 0; i < people.size(); i++) {
		people[i].print();
	}
	*/

	/* LESSON 4.23 */
	// Nested ATL types

	cout << "Done." << endl;
	return 0;
}