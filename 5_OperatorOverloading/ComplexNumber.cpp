#include "ComplexNumber.h"

int main() {

	ComplexNumber c1(3, 4);
	ComplexNumber c2(2, 3);
	ComplexNumber c3 = c1;
	c1 = c2;

	cout << c1 + c2 << endl;

	cout << c1 + 5 << endl;

	cout << (c1 == c2) << endl;

	cout << (c1 != c2) << endl;

	cout << *c1 << endl;

	cout << endl << "Ending program" << endl;
	return 0;
}