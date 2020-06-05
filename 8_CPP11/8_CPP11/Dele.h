#pragma once
#include <iostream>

using namespace std;

class Parent {
	int dogs;
	string test;
public:
	Parent () {
		dogs = 5;
		cout << "No param parent constr" << endl;
	}
	Parent(string test) {
		dogs = 5;
		this->test = test;
		cout << "String param constr" << endl;
	}
};

class Child : public Parent {
public:
	Child(): Parent("Hello") {

	}
};