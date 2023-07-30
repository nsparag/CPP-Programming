#include <iostream>
using namespace std;

int main() {
    // different ways to declare and initialize an string 
    char str1[4] = "C++";
    char str2[] = {'C','+','+','\0'};
    char str3[4] = {'C','+','+','\0'};
    string str4 = "C++";

    // display
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;

  return 0;
}
