#pragma once
#include <iostream>
using namespace std;

class Person {
private:
	int id;
	string name;

public:
	Person() : id(0), name("") {

	}

	Person(int id, string name) : id(id), name(name) {

	}

	Person(const Person& other) {
		id = other.id;
		name = other.name;
	}

	void print() {
		cout << id << " : " << name << endl;
	}

	// Lesson 5.24
	const Person& operator= (const Person& other) {
		id = other.id;
		name = other.name;

		return *this;
	}

	// Lesson 5.25
	friend ostream& operator<< (ostream& out, const Person& person) {
		out << person.id << " : " << person.name;
		return out;
	}
};

class Opp
{
};

