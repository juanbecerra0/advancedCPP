#pragma once
#include <iostream>
using namespace std;

class ComplexNumber
{
private:
	double real;
	double imaginary;
public:
	ComplexNumber() : real(0), imaginary(0) {

	}

	ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {

	}

	ComplexNumber(const ComplexNumber& other) {
		real = other.real;
		imaginary = other.imaginary;
	}

	const ComplexNumber& operator=(const ComplexNumber& other) {
		real = other.real;
		imaginary = other.imaginary;

		return *this;
	}

	double getReal() const { return real; }
	double getImaginary() const { return imaginary; }

	bool operator==(const ComplexNumber& other) {
		return getReal() == other.getReal() && getImaginary() == other.getImaginary();
	}

	bool operator!=(const ComplexNumber& other) {
		return !(*this == other);
	}

	ComplexNumber operator*() const {
		return ComplexNumber(real, -imaginary);
	}
};

ostream& operator<< (ostream& out, const ComplexNumber& complexNumber) {
	out << "(" << complexNumber.getReal() << ", " << complexNumber.getImaginary() << ")";
	return out;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2) {
	return ComplexNumber(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
}

ComplexNumber operator+(const ComplexNumber& c1, double d) {
	return ComplexNumber(c1.getReal() + d, c1.getImaginary());
}

ComplexNumber operator+(double d, const ComplexNumber& c1) {
	return ComplexNumber(c1.getReal() + d, c1.getImaginary());
}