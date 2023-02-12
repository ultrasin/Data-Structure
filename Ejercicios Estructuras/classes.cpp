#include <iostream>
#include "classes.h"

using std::cout;

class CrazyNumber {
	//overloading operators
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
};

class Dog {
public:
	virtual void Bark() = 0;
};

class Amstaff :public Dog {
	void Bark() {
		cout << "Woof...\n";
	}
};

int NumberOverloading() {
	CrazyNumber cr1(3, 5);
	CrazyNumber cr2(2, 4);
	CrazyNumber cr3 = cr1 + cr2;
	cr3.print();
}

void NewDog() {
	Dog* Kira = new Amstaff();
	Kira->Bark();
}