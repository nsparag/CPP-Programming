#include <iostream>

using namespace std;

int main()
{
        //Declaring variable of different data types
        int myIntVar;              // Integer (whole number without decimals)
        float myFloatVar;        // Floating point number (with decimals)
        double myDoubleVar;     // Floating point number (with decimals)
        char myCharVar;           // Character
        bool myBoolVar;          // Boolean (true or false)

        // printing the values of variables
        cout << "The size of Integer is " << sizeof(myIntVar) << " bytes" << endl;
        cout << "The size of Float is " << sizeof(myFloatVar) << " bytes" << endl;
        cout << "The size of Double is " << sizeof(myDoubleVar) << " bytes" << endl;
        cout << "The size of Character is " << sizeof(myCharVar) << " byte" << endl;
        cout << "The size of Boolean is " << sizeof(myBoolVar) << " byte" << endl;
}

/* ********************************* Sample Outut ********************************
The size of Integer is 4 bytes
The size of Float is 4 bytes
The size of Double is 8 bytes
The size of Character is 1 byte
The size of Boolean is 1 byte
********************************* Outut ******************************** */
