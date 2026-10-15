#pragma once
#include <iostream>

using namespace std;

class Exception {
public:
	virtual void ShowError() = 0;
};

class FileNotFoundException : public Exception {
public:
	void ShowError() { cout << "Couldn't open file. Please, check if file name is correct and make sure the file is in the project's directory." << endl << endl; }
};
