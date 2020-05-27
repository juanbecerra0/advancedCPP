#include "Files.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*	LESSON 3.10/3.11
// Align data on a single-byte boundary
#pragma pack(push, 1)
struct Person {
	char name[50];
	int age;
	double weight;
};
#pragma pack(pop)
*/

int main() {
	/*	LESSON 3.7
	fstream outFile;
	string outFileName = "test.txt";

	outFile.open(outFileName, ios::out);

	if (outFile.is_open()) {
		outFile << "Hello!" << endl;
		outFile << 12345 << endl;
		outFile.close();
	}
	else {
		cout << "Could not create file " << outFileName << endl;
	}
	*/

	/*	LESSON 3.8
	string inFileName = "test.txt";
	ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open()) {
		
		string line;

		while (inFile) {
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	}
	else {
		cout << "Could not open file " << inFileName << endl;
	}
	*/

	/*	LESSON 3.9
	string filename = "stats.txt";
	ifstream input;

	input.open(filename);

	if (!input.is_open()) {
		return 1;
	}

	while (input) {
		string line;

		getline(input, line, ':');

		int population;
		input >> population;

		// input.get();
		input >> ws;

		if (!input) {
			break;
		}

		cout << line << " -- " << population << endl;
	}

	input.close();
	*/

	/*	LESSON 3.10
	cout << sizeof(Person) << endl;
	*/

	/*	LESSON 3.11
	// Instance
	Person someone = { "Juan", 21, 180 };

	// Open file
	string fileName = "person.bin";
	ofstream outputFile;

	outputFile.open(fileName, ios::binary);

	// Write to file
	if (outputFile.is_open())
	{
		outputFile.write(
			reinterpret_cast<char*> (&someone),
			sizeof(Person)
		);

		outputFile.close();
	}
	else {
		cout << "Could not create file " << fileName << endl;
	}

	// Read file
	Person someoneElse = {};

	ifstream inputFile;

	inputFile.open(fileName, ios::binary);

	if (inputFile.is_open())
	{
		inputFile.read(
			reinterpret_cast<char*> (&someoneElse),
			sizeof(Person)
		);

		inputFile.close();
	}
	else {
		cout << "Could not read file " << fileName << endl;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.weight << endl;
	*/

	cout << "Ending program" << endl;
	return 0;
}