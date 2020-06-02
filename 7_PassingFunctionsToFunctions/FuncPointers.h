#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/* LESSON 7.34
void test(int value) {
	cout << "Hello world! " << value << endl;
}
*/

/* LESSON 7.35
bool match(string test) {
	return test.size() == 3;
}

void countStrings(vector<string>& texts, bool (*pMatch)(string test)) {
	for (int i = 0; i < texts.size(); i++) {
		if (match(texts[i]))
			cout << texts[i] << " :: " << "YES" << endl;
		else 
			cout << texts[i] << " :: " << "NO" << endl;
	}
}
*/

/* LESSON 7.36
class Parent {
private:
	int one;
public:
	Parent() : one(0) {

	}

	Parent(const Parent& other) : one(0) {
		cout << "Copy constr" << endl;
	}

	virtual void print() {
		cout << "parent" << endl;
	}

	virtual ~Parent() {

	}
};

class Child : public Parent {
private:
	int two;
public:
	Child() : two(0) {

	}

	void print() {
		cout << "child" << endl;
	}
};
*/

/* LESSON 7.37
class Animal {
public:
	virtual void speak() = 0;
};

class Dog : public Animal {
public:
	void speak() {
		cout << "Woof!" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() {
		cout << "Meow!" << endl;
	}
};
*/

/* LESSON 7.38 */
struct Test {
	virtual bool operator()(string& text) = 0;

	virtual ~Test() {}
};

struct MatchTest : public Test {
	bool operator()(string& text) {
		return text == "lion";
	}
};

void check(string text, Test& test) {
	if (test(text)) {
		cout << "PASS!" << endl;
	}
	else {
		cout << "FAIL" << endl;
	}
}