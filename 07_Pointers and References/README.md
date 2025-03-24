# Pointers and References

## Introduction

### Pointer
Pointers are types that can hold the address of a particular object.

````c++
char ch = '#';                // variable declaration and initialization
char *ptr = &ch;              // **pointer** declaration and initialization
char new_ch = *ptr;           // Dereferencing, value of ch will be assigned to ch_new
````
### References
A reference type is an alias to an existing object in memory.
````c++
char ch = '#';
char &ref = ch;               // reference declaration and initialization; ref is now alias of ch
char new_ch = ref;            // Dereferencing, value of ch will be assigned to ch_new
````

### Key Difference
* Pointers can be null, but references cannot; they must always refer to a valid object.
* Pointers can be re-assigned to point to different objects, whereas references are fixed once initialized.

## Basic
````c++
#include <iostream>
using namespace std;

int main()
{
    int n=44;
    int& rn = n;	// rn is declared to be a reference to the variable n
    
    // n is an lvalue; lvalue is something whose address is accessible
    
    int* pn = &n;	// pn is declared to be a pointer to the variable n
    
    cout << "n = " << n << endl; // prints the value of n
    cout << "&n = " << &n << endl; // prints the address of n
    cout << "rn = " << rn << endl; // prints the value refered by rn
    cout << "pn = " << pn << endl;
    cout << "*pn = " << *pn << endl; 

    return 0;
}

````
The sample output for this code is

    n = 44
    &n = 0x7fff0c5e51c4
    rn = 44
    pn = 0x7fff0c5e51c4
    *pn = 44

## `nullptr`
To initialize a pointer that does not point to any object, we can use the `nullptr`

## `const` Pointer
* This type of pointer itself is constant, meaning its address cannot be changed after initialization.
* It can point to either a constant or non-const variable.
    * In this case incrementing or decrementing a pointer is not allowed.
    * changing a value where pointer is locating is allowed

Delcaring a `const` Pointer
````c++
    int* const ptr;
````

## Pointer to `const`
* This type of pointer points to a constant value.
* You can read the value through the pointer, but you cannot modify it.

Delcaring a Pointer to `const`
````c++    
    const int* ptr;
````
Example:
````c++
int var1 = 10;
int var2 = 20;

int* p1 = &var1;  // OK, pointer to integer, p1 points to var1
*p1 = 30;         // OK, var1 becomes 30
p1 = &var2;       // OK, p1 points to var2 

int* const p2 = &var1;    // OK, const pointer to integer, p1 points to var1
*p2 = 30;                 // OK, var1 becomes 30
p2 = &var2;               // Error, cannot change the pointer

const int* p3 = &var1;      // OK, pointer to const integer, p1 points to var1
*p3 = 30;                 // Error, var1 can not be modified through p3
p3 = &var2;               // OK, p3 points to var2

const int* const p4 = &var1;   // Constant pointer to constant integer
*p4 = 60;                   // Error, cannot modify var1 through the pointer
p4 = &y;                    // Error, cannot change the pointer
````

## Returning a reference
````c++
#include <iostream>
using namespace std;

int& max(int& m, int& n) // return type is reference to int
{ 
    return (m > n ? m : n); // m and n are non-local references
}

int main()
{ 
    int m = 44, n = 22;
    cout << m << ", " << n << ", " << max(m,n) << endl;
    max(m,n) = 55; // changes the value of m from 44 to 55
    cout << m << ", " << n << ", " << max(m,n) << endl;
}
````
## `new` and `delete` operators

* Fundamental for managing memory allocation and deallocation on the heap
* Provide a mechanism for programmers to dynamically allocate memory for objects and arrays during program execution and then release that memory when it's no longer needed.

**`new` operator:**
* Used to allocate memory dynamically for objects or arrays of objects at runtime.
* It takes a memory allocation request as input, specifying the size and type of memory to be allocated.

syntax
````c++
dataType* pointerVariable = new dataType;  // Allocates memory for a single object
dataType* pointerArray = new dataType[arraySize];  // Allocates memory for an array
````
Example
````c++
int* ptr = new int;  // Allocates memory for an integer
*ptr = 42;  // Assigns value 42 to the allocated memory

int* numbers = new int[10];  // Allocates memory for an array of 10 integers
numbers[0] = 10;  // Assigns value 10 to the first element of the array
````
**`delete` operator:**
* Used to deallocate memory that was previously allocated using new.
* It takes a pointer as input, pointing to the memory block to be released.
  
syntax
````c++
delete pointerVariable;  // Deallocates memory for a single object
delete[] pointerArray;  // Deallocates memory for an array
````
Example
````c++
delete pointerVariable;  // Deallocates memory for a single object
delete[] pointerArray;  // Deallocates memory for an array
````
**Avoiding Memory Leaks**
* Memory Leaks: Improper memory management using new and delete can lead to memory leaks. If you allocate memory with new but forget to deallocate it with delete, the memory remains occupied even if it's not being used, potentially impacting program performance.
* Dangling Pointers: After deallocating memory with delete, the pointer used to access that memory becomes a dangling pointer. Using a dangling pointer can lead to undefined behavior or crashes. It's essential to set the pointer to nullptr after deallocation to avoid this issue.

Example to avoid memory leak
````c++
int* ptr = new int;
*ptr = 42;

// Use the allocated memory
...

// Deallocate the memory when finished
delete ptr;
ptr = nullptr;  // Set the pointer to nullptr to avoid dangling pointer issues
