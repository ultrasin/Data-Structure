#pragma once

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

void hanoiTower(int diskQuantity, string originRod, string destinyRod,
	string auxiliaryRod)
{
	if (diskQuantity == 0) {
		return;
	}
	hanoiTower(diskQuantity - 1, originRod, auxiliaryRod, destinyRod);
	cout << "Moved disk" << diskQuantity 
		 << " from " << originRod 
		 << " to rod " << destinyRod << endl;
	hanoiTower(diskQuantity - 1, auxiliaryRod, destinyRod, originRod);
}

//algorithm for counting 1,2,5,11,21,38
int twoAndFour(int _number) {
	if (_number < 1) {
		return _number;
	}
	else {
		return _number + twoAndFour(_number - 2) + twoAndFour(_number - 1);
	}
}