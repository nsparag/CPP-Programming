#include <iostream>
using namespace std;

int main() {
 
    string strVariable; // Declaring a string object
 
    //read and display a line of text
    cout << "Enter a string (line of text): ";
    getline(cin,strVariable);
    cout << "You entered: " << strVariable << endl;  

    return 0;
}
