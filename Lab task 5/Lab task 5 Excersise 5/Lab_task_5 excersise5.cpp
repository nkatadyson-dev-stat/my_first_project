#include <iostream>
#include <limits>
using namespace std;

double calculateSquareArea();
double calculateRectangleArea();
double calculateTriangleArea();

int main()  {
    int choice;

    while (true) {

        cout << "\nPlease select the area of the shape to calculagte" << endl;
        cout << "1 Square"<< endl;
        cout << "2 Rectangle" << endl;
        cout << "3 Triangle" << endl;
        cout << "4 Quit Program" << endl;
        cout << "\nEnter selection: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double area = calculateSquareArea();
                cout << " The area of the square is:" << area << endl;
                break;
             }
        case 2: {
            double area = calculateRectangleArea();
            cout << "The  area of the rectangle is:" << area << endl;
            break;
        }
        case 3: {
            double area = calculateTriangleArea();
            cout << " The area of the triangle is:" << area << endl;
            break;
        }
         case 4:
         cout << "Quitting program.Goodbye!" << endl;
         return 0;
         default:

         cout << "Invalid input.Please enter a valid input." << endl;
         
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
     break;
    }
}
}

double calculateSquareArea() {
     double side;
    cout << "Enter the length of the side of the square:";
    cin >> side;
    return side * side;
 }
 double calculateRectangleArea() {
    double length,width;
    cout <<"Enter the length of the rectangle:";
    cin >> length;
    cout <<"Enter the width of the rectangle:";
    cin >> width;
    return length * width;
 }

double calculateTriangleArea()  {
    double base, height;
    cout << "Enter the base of the triangle:";
    cin >> base;
    cout << "Enter the height of the triangle:";
    cin >> height;
    return 0.5 * base * height;
}
