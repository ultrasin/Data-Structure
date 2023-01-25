#pragma once

#define ASK_FOR_CONTAINER_SIZE "Type your container size: "
#define ADD_USER_INPUT_VALUES "Add those values to this container: "
#define CONDITION_TO_STOP "Add possitive values; cancels with negative values: "
#define MESSAGE_RESULT "Operation result: "
#define N 5

class Person {
private:
	int age;
	string name;
	float height;
public:
	Person(int _age,string _name,float _height) {
		age = _age;
		name = _name;
		height = _height;
	}
	void getInfo() {
		cout << "Age: " << age << endl 
			 << " Name: " << name << endl
			 << " Height: " << height << "cm " << endl;
	}
};

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

class Amstaff :public Dog {
	void Bark() {
		cout << "Woof...\n";
	}
};
