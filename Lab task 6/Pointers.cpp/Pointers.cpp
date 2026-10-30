#include <iostream>
using namespace std;

int main () {

    int firstValue;
    int secondValue;

    int *pPointer = nullptr;

    // assign pointer with the address of the firstvalue
    pPointer = &firstValue;
    *pPointer = 10; // Indirection

    //assign pointer with the address of second Value
    pPointer = &secondValue;
    *pPointer = 20; //Indirection

    cout << "firstValue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';

    return 0;
}