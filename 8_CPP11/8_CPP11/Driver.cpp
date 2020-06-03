#pragma once
//#include "Auto.h"
#include "CycleBuffer.h"

#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

int main() {
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

	/* 8.42 */
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

	/* 8.43 */


	/* 8.44 */

	cout << endl << "ENDING PROGRAM" << endl;
	return 0;
}