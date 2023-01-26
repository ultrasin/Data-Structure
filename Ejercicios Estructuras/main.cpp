#include <iostream>
#include "examples.h"
#include "classes.h"
#include "lists.h"
#include "sorting.h"
#include "recursion.h"

//using std namespace is bad;
//should use e.g. 'std::string' or 'std::cout' as follows...

using std::cout; using std::string; using std::cin; using std::endl;

int main() {

    //from examples.h
    /*addIntegerToArrayAndPrint();
    functMediaDeDiez(); //wrote originally in spanish, try to search for translation for unknown functions
    functMultiples(); 
    functDosArray(); 
    functSquareAndCube(); 
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

    //Person myself(30,"Name",1.81F);
    //myself.getInfo();
    
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

    /*****PART 1.2: USER INPUT ARRAY - THE SOLUTION (do not cheat)*********/
    /*int wholeNumbers2[N]{};

    cout << ADD_USER_INPUT_VALUES;
    for (int& i : wholeNumbers2) {
        cin >> i;
    }

    cout << "Unsorted array: \n";
    for (int i : wholeNumbers2) {
        cout << i << ' ';
    }*/
    /*int copyArray[N]{};

    for (int i = 0; i < N; i++) {
        copyArray[i] = wholeNumbers2[i];
    }
    
    bubbleSortAscending(copyArray);
    bubbleSortDescending(wholeNumbers2);

    cout << "\n\nSorted array Descending: \n";
    for (int i : wholeNumbers2) {
        cout << i << ' ';
    }

    cout << "\n\nSorted array Ascending: \n";
    for (int i : copyArray) {
        cout << i << ' ';
    }*/
    /*
    insertionSort(wholeNumbers2);

    cout << "\n\nArray using insertion sort: \n";
    for (int i : wholeNumbers2) {
        cout << i << ' ';
    }*/

    //from recursion.h
    /*cout << factorial(4);
    cout << fibonacci(3);
    hanoiTower(3,"origin","destiny","auxiliary");*/
    cout << twoAndFour(5);
    system("pause>0");
    return 0;
}