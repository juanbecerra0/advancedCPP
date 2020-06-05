#pragma once
#include <iostream>
#include <typeinfo>
#include <vector>
#include <initializer_list>
#include <functional>
#include <algorithm>
#include <memory>

//#include "Auto.h"
//#include "CycleBuffer.h"
//#include "InitializerList.h"
//#include "Lambdas.h"
//#include "Dele.h"
//#include "Move.h"

using namespace std;

/*
bool check(string& test) {
	return test.size() == 3;
}

class Check {
public:
	bool operator()(string& test) {
		return test.size() == 5;
	}
} check1;

void run(function<bool(string&)> check) {
	string test = "dog";
	cout << check(test) << endl;
}
*/

int main() {
	cout << "STARTING PROGRAM" << endl << endl;
	
	/* 53
	vector <string> vec{ "one", "two", "three" };

	auto lambda = [](string test) { return test.size() == 3; };

	cout << count_if(vec.begin(), vec.end(), lambda);

	cout << count_if(vec.begin(), vec.end(), check);

	cout << count_if(vec.begin(), vec.end(), check1);

	run(lambda);

	function<int(int, int)> add = [](int one, int two) { return one + two; };
	cout << add(7, 3);
	*/
	 
	/* 55. 56 57, 58, 59, 60
	Parent parent;
	Child child;
	*/

	/* 61, 62

	vector<Test> tests;
	tests.push_back(Test());

	Test test = getTest();
	*/

	cout << "";

	cout << endl << "ENDING PROGRAM" << endl;
	return 0;
}