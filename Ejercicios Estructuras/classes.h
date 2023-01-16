#pragma once

using std::string; using std::cout; using std::cin; using std::vector; using std::endl; using std::accumulate;

class CrazyNumber {

	int numberOne;
	int numberTwo;

public:
	CrazyNumber(int definedNumber, int undefinedNumber) {
		this->numberOne = definedNumber;
		this->numberTwo = undefinedNumber;
	}

	void print() {
		cout << numberOne << " + loco" << numberTwo;
	}

	CrazyNumber operator+ (CrazyNumber cr2) {
		CrazyNumber cr3(0, 0);
		cr3.numberOne = this->numberOne + cr2.numberOne;
		cr3.numberTwo = this->numberTwo + cr2.numberTwo;
		return cr3;
	}
};//overloading operators
class Dog {
public:
	virtual void Bark() = 0;
};