#include "Templ.h"

int main() {
	Test<string, int> test1("Hello");
	test1.print();

	print<int>(5);
	print("\n");
	print("Hello");

	cout << endl << "Ending program" << endl;
	return 0;
}