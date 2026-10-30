#include <iostream>
#include <string>

using namespace std;

int main (){

    int* dynamic = new int;

    string* dynamicString = new string;

    cout << "Enter an integer value:";
    cin >> *dynamicInt;

    cin.ignore();

    cout << "Enter a string value:";
    getline(cin, *dynamicString);

    cout << "\n----output---" << endl;
    cout << "The value of the dynamically allocated integer:" << *dynamicInt << endl;
    cout << "The value of the dynamically allocated string:" << *dynamicString << endl;

    delete dynamicInt;
    delete dynamicString;

    return 0;
}