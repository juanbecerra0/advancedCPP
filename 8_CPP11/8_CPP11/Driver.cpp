#pragma once
#include <iostream>
#include <typeinfo>
#include <vector>
#include <initializer_list>

//#include "Auto.h"
//#include "CycleBuffer.h"
//#include "InitializerList.h"
#include "Lambdas.h"

using namespace std;

/*void testLambda(void (*pFunc)(string)) {

	pFunc("test");
}

void testDivide(double (*pDivide)(double a, double b)) {
	auto rval = pDivide(9, 3);
	cout << rval << endl;
}
*/

int main2() {
	cout << "STARTING PROGRAM" << endl << endl;
	/* 8.39
	string n;
	decltype(n) name = "bob";

	cout << typeid(n).name() << endl;

	cout << name << endl;
	*/

	/* 8.40
	auto value = 7;

	cout << value << endl;
	cout << test(1, 7) << endl;
	cout << test2() << endl;
	*/

	/* 8.41
	auto texts = { "one", "two", "three" };

	for (auto text : texts) {
		cout << text << endl;
	}

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	for (auto number : numbers) {
		cout << number << endl;
	}
	*/

	/* 8.42, 43, 44
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");
	textring.add("five");

	//for (int i = 0; i < textring.size(); i++) {
	//	cout << textring.get(i) << endl;
	//}

	for (auto text : textring) {
		cout << text << endl;
	}
	*/

	/* 8.45
	int values[] = {1, 4, 5};

	cout << values[0] << endl;

	struct {
		string text;
		int id;
	} r1 = { "Hello", 7 }, r2 = { "Goodbye", 9};
	cout << r1.text << endl;
	*/

	/* 8.46
	int value{ 5 };

	cout << value << endl;

	string text{ "Hello" };
	cout << text << endl;

	int numbers[]{ 1, 2, 3 };
	cout << numbers[1] << endl;

	int* pInts = new int[3] {1, 2, 3};
	cout << pInts[1] << endl;
	delete pInts;

	int value1{};
	cout << value1 << endl;

	int* pSomething{ &value };
	cout << *pSomething << endl;

	int* pSomethingElse{ nullptr };
	cout << pSomethingElse << endl;

	int numbers2[5]{};
	cout << numbers2[3] << endl;

	struct {
		int value;
		string text;
	} s1{5, "Hello"};

	cout << s1.value << " : " << s1.text << endl;

	vector<string> strings{ "one", "two", "three" };
	cout << strings[2] << endl;
	*/

	/* 8.47
	vector<int> numbers{ 1, 3, 4, 6 };
	cout << numbers[2] << endl;

	Test test{ "apple", "orange", "banana" };
	test.print({ "apple", "orange", "banana" });
	*/

	/* 8.48 
	Test test(1);
	test.print();
	*/
	
	/* 8. 49
	auto func = []() { cout << "Hello" << endl; };
	test(func);
	*/

	/* 8. 50, 51
	auto pGreet = [](string name) { cout << "Hello " << name << endl; };

	testLambda(pGreet);

	auto pDivide = [] (double a, double b) -> double {
		if (b == 0)
			return 0;
		else 
			return a / b;
	};

	cout << pDivide(10, 3) << endl;

	testDivide(pDivide);

	int one = 1;
	int two = 2;
	int three = 3;

	// Capture all local vars by value
	[=]() { cout << "Hello " << one << " " << two << " " << three << endl; }();

	// Capture all local vars by value, but capture three by reference
	[=, &three]() { three = 7;  cout << "Hello " << one << " " << two << " " << three << endl; }();

	// Capture all local vars by reference, but capture one by value
	[&, one]() { two = 9;  cout << "Hello " << one << " " << two << " " << three << endl; }();
	*/

	Test test;
	test.run();

	cout << endl << "ENDING PROGRAM" << endl;
	return 0;
}