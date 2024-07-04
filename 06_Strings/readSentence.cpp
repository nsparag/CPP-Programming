#include <iostream>
using namespace std;

int main() {
 
    char strVariable[100];

    //read and display a line of text
    cout << "Enter a string (line of text): ";
    cin.get(strVariable,100);
    cout << "You entered: " << strVariable << endl;  

    return 0;
}
