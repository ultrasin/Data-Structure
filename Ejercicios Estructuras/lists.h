#pragma once

#include <string>
#include <map>
#include <list>

using namespace std;

class Node {
public:
	string word;
	Node* next = NULL;

    Node() //constructor
    {
        word = "";
        next = NULL;
    }

}*first, *last;

void insertNode() {
    Node* newNode = new Node(); //often called temp
    cout << "Add the word for the new node: ";
    cin >> newNode->word;

    if (first == NULL) {
        first = newNode;
        first->next = NULL;
        last = newNode;
    }
    else {
        last->next = newNode;
        newNode->next = NULL;
        last = newNode;
    }
    cout << "\nNode added successfully...\n\n";
}

void printList() {
    Node* temp = new Node();
    temp = first;
    if (first == NULL) {
        cout << "List is empty...\n";
    }
    else {
        while (temp != NULL) {
            cout << temp->word << ' ';
            temp = temp->next;
        }
    }
}

void deleteNode(){

}
