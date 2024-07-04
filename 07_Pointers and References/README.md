# Referencing

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
