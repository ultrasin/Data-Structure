#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstdlib>
#include "examples.h"
#include "classes.h"
#include "lists.h"

//this could perfectly be in the header file of classes.h
class Amstaff :public Dog {
    void Bark() {
        cout << "Woof...\n";
    }
};

int main() {

    //from examples.h
    /*functPrimerosDos(); 
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
    functAllocMemory();*/

    //from classes.h
    /*CrazyNumber cr1(3, 5);
    CrazyNumber cr2(2, 4);
    CrazyNumber cr3 = cr1 + cr2;
    cr3.print();
    Dog* Kira = new Amstaff();
    Kira->Bark();*/

    //from lists.h


    system("pause>0");
}