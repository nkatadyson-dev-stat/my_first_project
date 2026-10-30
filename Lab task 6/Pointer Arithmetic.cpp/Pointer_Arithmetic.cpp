#include <iostream>
using namespace std;

int main () {

    //null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    //assign the address of the first element to pointer
     pPointer = numbersArray;

     //output the address of the first element
     cout << "Address at pPinter:" << pPointer << endl;
     cout << "Address of numbersArray[0]:" << numbersArray << endl;

     //output the value oof the first element using the pointer and  indirection 
     cout << "Value at pPointer:"<< *pPointer << endl;

     //This outputs the value of the second element
     cout << "Value at ++pPointer:" << *(pPointer) << endl;

     //Thi outputs the value of the first element
     cout << "Value at pPointer++:"<< *(pPointer++) << endl;

     return 0;
}