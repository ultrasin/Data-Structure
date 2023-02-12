#include <iostream>
#include "classes.h"

using std::cout;

class Dog {
public:
	virtual void Bark() = 0;
};

class Amstaff :public Dog {
	void Bark() {
		cout << "Woof...\n";
	}
};

void NewDog() {
	Dog* KiraRIP = new Amstaff();
	KiraRIP->Bark();
}