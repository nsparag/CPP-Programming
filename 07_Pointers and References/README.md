# Pointers and References

## Basic
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

    int* const ptr;


## Pointer to a constant
* This type of pointer points to a constant value.
* You can read the value through the pointer, but you cannot modify it.

Delcaring a Pointer to `const`
    
    const int* ptr;

## Returning a reference

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

## `new` and `delete` operators

* Fundamental for managing memory allocation and deallocation on the heap
* Provide a mechanism for programmers to dynamically allocate memory for objects and arrays during program execution and then release that memory when it's no longer needed.

**`new` operator:**
* Used to allocate memory dynamically for objects or arrays of objects at runtime.
* It takes a memory allocation request as input, specifying the size and type of memory to be allocated.

syntax

    dataType* pointerVariable = new dataType;  // Allocates memory for a single object
    dataType* pointerArray = new dataType[arraySize];  // Allocates memory for an array

Example

int* ptr = new int;  // Allocates memory for an integer
*ptr = 42;  // Assigns value 42 to the allocated memory

    int* numbers = new int[10];  // Allocates memory for an array of 10 integers
    numbers[0] = 10;  // Assigns value 10 to the first element of the array

**`delete` operator:**
* Used to deallocate memory that was previously allocated using new.
* It takes a pointer as input, pointing to the memory block to be released.
  
syntax

    delete pointerVariable;  // Deallocates memory for a single object
    delete[] pointerArray;  // Deallocates memory for an array

Example

    delete pointerVariable;  // Deallocates memory for a single object
    delete[] pointerArray;  // Deallocates memory for an array

**Avoiding Memory Leaks**
* Memory Leaks: Improper memory management using new and delete can lead to memory leaks. If you allocate memory with new but forget to deallocate it with delete, the memory remains occupied even if it's not being used, potentially impacting program performance.
* Dangling Pointers: After deallocating memory with delete, the pointer used to access that memory becomes a dangling pointer. Using a dangling pointer can lead to undefined behavior or crashes. It's essential to set the pointer to nullptr after deallocation to avoid this issue.

Example to avoid memory leak

    int* ptr = new int;
    *ptr = 42;
    
    // Use the allocated memory
    ...
    
    // Deallocate the memory when finished
    delete ptr;
    ptr = nullptr;  // Set the pointer to nullptr to avoid dangling pointer issues
