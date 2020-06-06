#pragma once

#include <iostream>

using namespace std;
using namespace placeholders;

class Test {

};

template<typename T>
void call(T&& arg) {
	check(forward<T>(arg));
}

void check(Test& test) {
	cout << "lvalue" << endl;
}

void check(Test&& test) {
	cout << "rvalue" << endl;
}

// ---- 67
int add(int a, int b, int c) {
	cout << a << ", " << b << ", " << c << endl;
 	return a + b + c;
}

int run(function<int(int, int)> func) {
	return func(7, 3);
}