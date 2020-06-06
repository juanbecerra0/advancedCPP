#pragma once
#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}
};