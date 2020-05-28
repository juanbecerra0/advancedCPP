#include <iostream>
#include <map>

#pragma once
#include "string.h";

using namespace std;


class Maps
{
};

class Person {
private:
	string name;
	int age;

public:
	Person() : name(""), age(0) {

	}

	Person(const Person& other) {
		cout << "Copying person" << endl;
		name = other.name;
		age = other.age;
	}
	
	Person(string name, int age) :
		name(name), age(age) {

	}

	void print() const {
		cout << name << " : " << age << endl;
	}

	bool operator < (const Person& other) const {
		if(name == other.name)
			return age < other.age;
		else
			return name < other.name;
	}
};

