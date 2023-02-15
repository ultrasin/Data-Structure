#include <iostream>
#include <string>
#include "lists.h"

using std::cout; using std::string; using std::endl; using std::ostream;

class Person {
public:
	int age;
	string name;
	float height = 0.0F;

	Person(int _age, string _name, float _height) {
		age = _age;
		name = _name;
		height = _height;
	}
	void getInfo() {
		cout << "Age: " << age << endl
			<< "Name: " << name << endl
			<< "Height: " << height << "cm " << endl;
	}
};

class TreeNode {
public:
	Person data;
	TreeNode* next = NULL;
}*first, * last;

void firstNode(TreeNode* _head, Person _data) {
	_head->data = _data;
	_head->next = NULL;
}

//overloaded operator to work with cout and a class
void operator<<(ostream& _cout, Person& _personClass) {
	_cout << "Age: " << _personClass.age << endl
		<< "Name: " << _personClass.name << endl
		<< "Height: " << _personClass.height << "cm " << endl;
}
