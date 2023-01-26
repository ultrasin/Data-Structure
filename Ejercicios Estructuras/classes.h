#pragma once

#define ASK_FOR_CONTAINER_SIZE "Type your container size: "
#define ADD_USER_INPUT_VALUES "Add those values to this container: "
#define CONDITION_TO_STOP "Add possitive values; cancels with negative values: "
#define MESSAGE_RESULT "Operation result: "
#define N 5

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
