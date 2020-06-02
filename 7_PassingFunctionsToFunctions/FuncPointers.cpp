#include "FuncPointers.h"

int main() {

	/* LESSON 7.34 
	test(10);

	// Create pTest function pointer variable
	void (*pTest)(int) = test;

	// Call the function 
	pTest(20);
	*/

	/* LESSON 7.35
	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("four");
	texts.push_back("five");
	texts.push_back("six");

	//cout << count_if(texts.begin(), texts.end(), match) << endl;

	countStrings(texts, match);
	*/

	/* LESSON 7.36 
	Child c1;
	Parent& p1 = c1;
	p1.print();

	Parent p2 = Child();
	p2.print();
	*/

	/* LESSON 7.37
	Dog dog;
	Cat cat;

	dog.speak();
	cat.speak();
	*/

	/* LESSON 7.38 */
	MatchTest pred;

	string value = "lion";

	MatchTest m;

	check("lion", m);

	cout << endl << "Ending program" << endl;
	return 0;
}