#include <iostream>
#include <string>
#include "recursion.h"

using std::cout; using std::string; using std::endl; using std::ostream;

int factorial(int _n) {
	if (_n > 1) {
		return _n * factorial(_n - 1);
	}
	else {
		return 1;
	}
}

int fibonacci(int _n) {
	if (_n <= 1) {
		return _n;
	}
	else {
		return fibonacci(_n - 1) + fibonacci(_n - 2);
	}
}

void hanoiTower(int diskQuantity, string originRodName, string destinyRodName,
	string auxiliaryRodName)
{
	if (diskQuantity == 0) {
		return;
	}
	hanoiTower(diskQuantity - 1, originRodName, auxiliaryRodName, destinyRodName);
	cout << "Moved disk" << diskQuantity
		<< " from " << originRodName
		<< " to rod " << destinyRodName << endl;
	hanoiTower(diskQuantity - 1, auxiliaryRodName, destinyRodName, originRodName);
}
