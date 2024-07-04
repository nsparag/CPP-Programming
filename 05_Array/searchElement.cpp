#include <iostream>
#define SIZE 5
using namespace std;

int main() {
    int array1[SIZE];
    int searchKey;
    bool flag = 0;
    //take input from user
    cout << "Enter " << SIZE << " elements of array: ";
    for (int index = 0; index < SIZE; index++) {
        cin >> array1[index];
    }
    cout << endl;

    cout << "Enter element to be searched ";
    cin >> searchKey;

    for (int j : array1) {
        if(searchKey == array1[j]){
            cout << "Element " << searchKey << " found at location" << j+1 << endl;
            flag=1;
            }
    }
    if(!flag)
       cout << "Element " << searchKey << " is not present in given array."<< endl;

    return 0;
}
