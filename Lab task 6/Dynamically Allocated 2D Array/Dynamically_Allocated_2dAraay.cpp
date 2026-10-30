#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    do {
        cout << "Enter the number oof rows (max 3):";
        cin >> rows;
        cout << "Enter the number of columns (max 3):";
        cin >> cols;

        if (rows > 3 || cols > 3 || rows <= 0 || cols <= 0) {
            cout << "Invalid input.Dimensions must be between 1 and 3.Please try again.\n" << endl;
            }
        }while (rows > 3 || cols > 3 || rows <= 0 || cols <= 0);

        double ** matrix = new double*[rows];

        for (int i = 0; i < rows; ++i) {
            matrix [i] = new double[cols];
        }

        cout << "\nEnter values for the array:" << endl;
        for( i = 0; i < rows; ++i) {
            for ( int J = 0; < cols; ++j) {
                cout << " Element [" << i <<']["<< j <<"]:";
                cin >> matrix[i][j];
             }
           }
        cout << "\n----Array Output---" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    for ( int i = 0; i < rows; ++i) {
         delete[] matrix[i];
         }
         delete[] matrix;

         return 0;
}