#pragma once

#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test {
private:
	int id{3};
	string name{"Mike"};
public:
	Test() = default;

	// Remove copy constructor and assignment operator
	Test(const Test& other) = delete;
	Test& operator= ( const Test& other ) = delete;

	Test(int id) : id(id) {

	}

	void print() {
		cout << id << " : " << name << endl;
	}

};