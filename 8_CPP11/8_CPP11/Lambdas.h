#pragma once
#include <iostream>
#include <typeinfo>
#include <initializer_list>

using namespace std;

class Test {
private:
	int one = 1;
	int two = 2;

public:
	void run() {
		int three{ 3 };
		int four{ 4 };

		auto pLambda = [&, this]() {
			one = 111;
			cout << one << " " << two << " " << three << " " << four << endl;
		};

		pLambda();
	}
};