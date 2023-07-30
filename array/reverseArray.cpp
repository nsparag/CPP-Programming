#include <iostream>
#define SIZE 5
using namespace std;

int main() {
    int array1[SIZE];
    int temp, index;
    //take input from user
    cout << "Enter " << SIZE << " elements of array: ";
    for (index = 0; index < SIZE; index++) {
        cin >> array1[index];
    }
    cout << endl;

    // display entered array ekements
    cout << "Given Array is :";
    for (index = 0; index < SIZE; index++) {
        cout << array1[index] << " ";
    }
    cout << endl;

    // reverse array ekements
    cout << "reverse array :";
    for (index = 0; index < SIZE/2; index++) {
        temp = array1[index];
        array1[index] = array1[SIZE-1-index];
        array1[SIZE-1-index] = temp;
    }
    cout << "Reverse Array is :";
    for (index = 0; index < SIZE; index++) {
        cout << array1[index] << " ";
    }
    cout << endl;

    return 0;
}
