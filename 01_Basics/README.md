# The "Hello World" Program
#### A program to display "Hello World";
````c++
#include <iostream>
int main()
{ 
    std::cout << "Hello World!" << std::endl;
    return 0;
}
````
`iostream` is input/output stream, a standard C++ header file

#### Another program to display "Hello World";
````c++
#include <iostream>
using namespace std;
int main()
{ 
    cout << "Hello World!" << endl;
    return 0;
}
````
`namespace` is a group of definition. It make possible for a program to use different objects with the same name. Here, `cout` and `endl` objects are defined in `std namespace`.
    
#### Scope of variable
````c++
int main()
{
    m = 1;	// ERROR, not in the scope of m
    int m;
    {
        m = 2;	// Acceptable
        int n;
        n = 3;	// Acceptable
    }
    m = 4;	// Acceptable
    n = 5;	// NOT Acceptable, NOT in scope of n

    return 0;
}
````
# `static` Specifier
* The static specifier says the object will have a static storage duration.
* The memory space for static objects is allocated when the program starts and deallocated when the program ends.
* Only one instance of a static object exists in the program.
* If a local variable is marked as static, the space for it is allocated the first time the program control encounters its definition and deallocated when the program exits.
  
**Example (without static variable):**
````c++
#include <iostream>
void myfunction()
{
    int x = 0; // defined every rime
    x++;
    std::cout << "Function ran: " << x << " time(s)." << '\n';
}
int main()
{
    myfunction();
    myfunction();
    myfunction();
}
````
Output: 
````c++
Function ran: 1 time(s).
Function ran: 1 time(s).
Function ran: 1 time(s).
````

**Example (with static variable):**
````c++
#include <iostream>
void myfunction()
{
    static int x = 0; // defined only the first time, skipped every other time
    x++;
    std::cout << "Function ran: " << x << " time(s)." << '\n';
}
int main()
{
    myfunction(); // x == 1
    myfunction(); // x == 2
    myfunction(); // x == 3
}
````
Output: 
````c++
Function ran: 1 time(s).
Function ran: 2 time(s).
Function ran: 3 time(s).
````
