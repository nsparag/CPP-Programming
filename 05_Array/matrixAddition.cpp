#include <iostream>
using namespace std;
#define SIZE 50

int main()
{
    int row1, row2, column1, column2, matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], sum[SIZE][SIZE], i, j;

    // Storing elements of first matrix entered by user.
    cout << "Enter number of rows for matrix 1: ";
    cin >> row1;
    cout << "Enter number of columns for matrix 1: ";
    cin >> column1;
    cout << endl << "Enter elements of 1st matrix: " << endl;
    
    for(i = 0; i < row1; ++i)
       for(j = 0; j < column1; ++j)
       {
           cout << "Enter element " << i + 1 << j + 1 << " : ";
           cin >> matrix1[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << "Enter number of rows for matrix 2: ";
    cin >> row2;
    cout << "Enter number of columns for matrix 2: ";
    cin >> column2;
    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(i = 0; i < row2; ++i)
       for(j = 0; j < column2; ++j)
       {
           cout << "Enter element " << i + 1 << j + 1 << " : ";
           cin >> matrix2[i][j];
       }


    // Adding Two matrices
    if(row1 == row2 && column1 == column2){
        for(i = 0; i < row1; ++i){
          for(j = 0; j < column1; ++j)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    // Displaying the resultant sum matrix.
        cout << endl << "Sum of two matrix is: " << endl;
        for(i = 0; i < row1; ++i){
          for(j = 0; j < column1; ++j)
            cout << sum[i][j] << "  ";
          cout << endl;
        }
    }
    else
      cout << "Check Dimensions" <<endl<< "matrix1 :"<< row1 <<"x"<<column1 <<endl << "matrix2 :"<< row2 <<"x"<<column2 <<endl <<"Dimentions of given matrices are not equal; operation can not be performed";

    return 0;
}
