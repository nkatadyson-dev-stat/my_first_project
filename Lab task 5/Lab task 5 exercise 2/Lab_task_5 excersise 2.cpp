#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int daysUntilExipiration = rand() % 12;
    cout << "Days until expiration: " << daysUntilExipiration << endl;

    if (daysUntilExipiration  == 0 ) {
        cout << "Your Subscription has expired!" << endl;
    } else {
        switch( daysUntilExipiration) {
            case 1:
                cout << "Your subscription  expires within a day!." << endl;
                cout << "Renew now now and save 20%!" << endl;
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            cout << "Your suscription expires in value of " << daysUntilExipiration << " days." << endl;
               cout << "Renew now and save 10%!" << endl;
                break;
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                cout << "Your subscription will expire soon.Renew now !"<< endl;
                break;
                case 11:
                cout << "You have an active subscription ." << endl;
                break;

                default:

                cout << "Error." << endl;
                 }
           }

        return 0;

        }

