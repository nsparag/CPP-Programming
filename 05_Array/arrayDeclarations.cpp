#include <iostream>
using namespace std;

int main() {
    int array1[5] = {19, 10, 8, 17, 9}; // declare and initialize an array
    int array2[] = {19, 10, 8, 17, 9}; // declare and initialize an array
    int array3[5] = {19, 10, 8}; // declare and initialize an array

  //  Printing array elements using traditional for loop
  cout << "\n Traditional Method: ";
  for (int i = 0; i < 5; ++i) {
    cout << array1[i] << "  ";
  }
  cout << endl;

//  Printing array elements using range based for loop/ modern method
  cout << "\n Modern Method: ";
  for (int j : array1) {
    cout << j << "  ";
  }

   return 0;
}
