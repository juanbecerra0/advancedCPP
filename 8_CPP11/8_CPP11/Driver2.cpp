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
//#include "Casts.h"
//#include "Forwarding.h"
//#include "Pointers.h"

using namespace std;
using namespace placeholders;

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
	tests.push_back(getTest());

	Test test;
	test = getTest();
	*/
	
	/* 63, 64, 65
	Parent parent;
	Brother brother;

	Parent* pp = &brother;

	// Static, not very safe
	//Parent* ppb = &brother;
	//Brother* pbb = static_cast<Brother*>(ppb);

	// Valid!
	Parent* ppb = &brother;
	Brother* pbb = dynamic_cast<Brother*>(ppb);

	if (pbb == nullptr) {
		cout << "Invalid!" << endl;
	}
	else {
		cout << "Valid!" << endl;
	}

	// Invalid!
	ppb = &parent;
	pbb = dynamic_cast<Brother*>(ppb);

	if (pbb == nullptr) {
		cout << "Invalid!" << endl;
	}
	else {
		cout << "Valid!" << endl;
	}

	// Rvalue -> lvalue reference
	Parent&& p = static_cast<Parent&&>(parent);
	*/

	/* 66 
	Test test;

	call(test);
	call(Test());
	*/

	/* 67
	auto calc = bind(add, _1, 100, _2);

	cout << run(calc) << endl;
	*/

	/* 68, 69
	{
		//unique_ptr<Test[]> puTest(new Test[2]);

		//puTest[1]->greet();

		shared_ptr<Test> psTest = make_shared<Test>();

		shared_ptr<Test> psTest2 = psTest;

	}
	*/

	cout << endl << "ENDING PROGRAM" << endl;
	return 0;
}