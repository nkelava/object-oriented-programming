#include "Errors.h"
#include <limits>
#include <cstdlib>

void WrongInputType::HandleError() {
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}