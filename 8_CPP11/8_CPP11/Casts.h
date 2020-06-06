#pragma once
#include <iostream>

using namespace std;

class Parent {
	virtual void speak() {
		cout << "parent" << endl;
	}

};

class Brother : public Parent {

};

class Sister : public Parent {

};