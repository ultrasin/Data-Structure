#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstdlib>
#include "examples.h"
#include "classes.h"

class Amstaff :public Dog {
    void Bark() {
        cout << "Woof...\n";
    }
};
int main() {

    //functPrimerosDos(); 1y2
    //funtMediaDeDiez(); 3
    //functMultiples(); 4
    //functDosArray(); 5 
    //functSquareCube(); 6
    //functInverse(); 7
    //functGrades(); 8
    //functMenosUno(); 9
    //functOrder(); 10
    //functMonths(); 11. TODO
    //functPointerExtra(); //EXTRA
    //functAllocMemory(); // EXTRA

    /*CrazyNumber cr1(3, 5);
    CrazyNumber cr2(2, 4);
    CrazyNumber cr3 = cr1 + cr2;
    cr3.print();*/

    Dog* Kira = new Amstaff();
    Kira->Bark();

    system("pause>0");
}