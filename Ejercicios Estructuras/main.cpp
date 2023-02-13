#include <iostream>
#include "examples.h"
#include "classes.h"
#include "lists.h"
#include "sorting.h"
#include "recursion.h"
#include "graphs.h"

//using std namespace is bad;
//should use e.g. 'std::string' or 'std::cout' as follows...

using std::cout; using std::string; using std::cin; using std::endl; using std::ostream;

int main() {

    //USE FUNCTIONS FROM ANY HEADER FILE TO TEST//
 
    //example
    //hanoiTower(3, "origin", "destiny", "auxiliary");

    //use add edge for the matrix at the end of graphs.cpp
    addEdge(4,4,5);
    PrintGraphMatrix();

    system("pause>0");
    return 0;
}