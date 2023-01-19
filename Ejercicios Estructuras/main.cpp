#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstdlib>
#include "examples.h"
#include "classes.h"
#include "lists.h"
#include "sorting.h"

//macros
#define ASK_FOR_CONTAINER_SIZE "Type your container size: "
#define ADD_USER_INPUT_VALUES "Add those values to this container: "
#define CONDITION_TO_STOP "Add possitive values; cancels with negative values: "
#define MESSAGE_RESULT "Operation result: "

//bad use of namespace; should use e.g. 'std::string' or 'std::cout'
using namespace std;

int main() {

    //from examples.h
    /*addIntegerToArrayAndPrint();
    functMediaDeDiez(); 
    functMultiples(); 
    functDosArray(); 
    functSquareCube(); 
    functInverse(); 
    functGrades(); 
    functMenosUno();
    functOrder(); 
    functMonths(); 
    functPointerExtra(); 
    functMultiples();
    */

    //from classes.h
    /*CrazyNumber cr1(3, 5);
    CrazyNumber cr2(2, 4);
    CrazyNumber cr3 = cr1 + cr2;
    cr3.print();
    Dog* Kira = new Amstaff();
    Kira->Bark();*/

    //from lists.h
    /*insertInFront();
    insertInLast(&first,"testing string");
    printList();*/
    
         /*****Sorting arrays*********/
    /*****PART 1.1: HARDCODED ARRAY*********/
    
    //TODO: fix when more than 2 values are added after a greater one
    /*int wholeNumbers[N] = {7,2,3,2,5,3,4};

    cout << "Unsorted array: \n";
    for (int i : wholeNumbers) {
        cout << i << ' ';
    }

    swappingNeighbors(wholeNumbers);

    cout << "\nSorted array: \n";
    for (int i : wholeNumbers) {
        cout << i << ' ';
    }
    cout << endl;*/

    /*****PART 1.2: USER INPUT ARRAY*********/

    int wholeNumbers2[N]{};

    cout << ADD_USER_INPUT_VALUES;
    for (int& i : wholeNumbers2) {
        cin >> i;
    }

    cout << "Unsorted array: \n";
    for (int i : wholeNumbers2) {
        cout << i << ' ';
    }

    bubbleSortAscending(wholeNumbers2);

    cout << "\nSorted array: \n";
    for (int i : wholeNumbers2) {
        cout << i << ' ';
    }


    system("pause>0");
    return 0;
}