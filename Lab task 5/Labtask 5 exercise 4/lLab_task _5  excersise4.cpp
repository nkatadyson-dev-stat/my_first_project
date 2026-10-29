#include <iostream>
#include <iostream>
#include <limits>

using namespace std;

int main (){
    int userInput;
    bool isValid = false;

    cout << "Enter an integer value between 5 and 10" << endl;

    while (!isValid) {

        if (cin >> userInput) {

            if (userInput >= 5 && userInput <= 10) {
                isValid = true;

            } else {

                cout << "You entered " << userInput << "Please enter a number between 5 and 10." << endl;
            }
        }   else  {

            cout << "Sorry,You entered an invalid  number ,Pleaes try again " << endl;
            
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
}cout << "Your input value (" << userInput << ") has been accepted." << endl;

return 0;
}