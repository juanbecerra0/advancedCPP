#include "Exceptions.h"

#include <iostream>
#include <exception>
using namespace std;

/*	LESSON 2.3
void mightGoWrong() {
	bool error1 = false;
	bool error2 = false;
	bool error3 = true;

	if (error1) {
		throw 8;
	}

	if (error2) {
		throw "Something went wrong";
	}

	if (error3) {
		throw string("Something else went wrong");
	}
}
*/

/*	LESSON 2.4
class CanGoWrong {
public:
	CanGoWrong() {
		char* pMemory = new char[9999999999999999999];
		delete[] pMemory;
	}
};
*/

/* LESSON 2.5
class MyException : public exception {
public:
	virtual const char* what() const throw() {
		return "Something bad happened";
	}
};

class Test {
public:
	void goesWrong() {
		throw MyException();
	}
};
*/

/* LESSON 2.6 
void goesWrong() {
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected) {
		throw bad_alloc();
	}

	if (error2Detected) {
		throw exception();
	}
}
*/

int main() {
	/* LESSON 2.3
	try {
		mightGoWrong();
	}
	catch (int e) {
		cout << "Error code: " << e << endl;
	}
	catch (char const* e) {
		cout << "Error code: " << e << endl;
	}
	catch (string& e) {
		cout << "Error code: " << e << endl;
	}
	*/

	/* LESSON 2.4
	try {
		CanGoWrong();
	}
	catch (bad_alloc& e) {
		cout << "Error: " << e.what() << endl;
	}
	*/

	/* LESSON 2.5
	Test test;

	try {
		test.goesWrong();
	}
	catch (MyException e) {
		cout << e.what() << endl;
	}
	*/

	/* LESSON 2.6
	try {
		goesWrong();
	}
	catch (bad_alloc& e) {
		cout << e.what() << endl;
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	*/

	cout << "Ending program" << endl;

	return 0;
}