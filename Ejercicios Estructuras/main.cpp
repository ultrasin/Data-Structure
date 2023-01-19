#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstdlib>
#include "examples.h"
#include "classes.h"
#include "lists.h"

using std::string; using std::cout; using std::cin; using std::vector; using std::endl; using std::accumulate;

constexpr auto ASK_FOR_CONTAINER_SIZE = "Type your container size: ";
constexpr auto ADD_USER_INPUT_VALUES = "Add those values to this container: ";
constexpr auto CONDITION_TO_STOP = "Add possitive values; cancels with negative values: ";
constexpr auto MESSAGE_RESULT = "Operation result: ";
constexpr auto N = 10;//macro defined in c++11 and superior

//this could perfectly be in the header file of classes.h
class Amstaff :public Dog {
    void Bark() {
        cout << "Woof...\n";
    }
};

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
    
    int wholeNumbers[10]{};

    cout << ADD_USER_INPUT_VALUES;
    for (auto& i : wholeNumbers) {//auto instead using the primitive types such as int, float, double...
        cin >> i;
    }

    cout << MESSAGE_RESULT;
    for (int i : wholeNumbers) {
        cout << i << ' ';
    }

    system("pause>0");
    return 0;
}