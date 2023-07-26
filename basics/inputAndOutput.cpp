#include <iostream>

using namespace std;

int main()
{
       // DEclaring Variables
        int myIntVar;                   // Integer (whole number without decimals)
        float myFloatVar;               // Floating point number (with decimals)
        double myDoubleVar;             // Floating point number (with decimals)
        char myCharVar;                 // Character
        string myStringVar;             // String (text)
        bool myBoolVar;                 // Boolean (true or false)

        //Get the variable values from user
        cout << "Enter integer value ";
        cin >> myIntVar;

        cout << "Enter float value ";
        cin >> myFloatVar;

        cout << "Enter double value ";
        cin >> myDoubleVar;

        cout << "Enter character value ";
        cin >> myCharVar;

        cout << "Enter string value ";
        cin >> myStringVar;

        cout << "Enter boolean value ";
        cin >> myBoolVar;

        // printing the values of variables
        cout << "The value of myIntVar is " << myIntVar <<endl;
        cout << "The value of myFloatVar is " << myFloatVar <<endl;
        cout << "The value of myDoubleVar is " << myDoubleVar <<endl;
        cout << "The value of myCharVar is " << myCharVar <<endl;
        cout << "The value of myStringVar is " << myStringVar <<endl;
        cout << "The value of myBoolVar is " << myBoolVar <<endl;
}


/* ********************************** Sample Output **********************************
Enter integer value45 
Enter float value 25.56
Enter double value 968.36
Enter character value d
Enter string value It'sMe!
Enter boolean value false
The value of myIntVar is 45
The value of myFloatVar is 25.56
The value of myDoubleVar is 968.36
The value of myCharVar is d
The value of myStringVar is It'sMe!
The value of myBoolVar is 0

********************************** Sample Output ********************************** */
