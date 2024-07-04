# The "Hello World" Program
#### A program to display "Hello World";

    #include <iostream>
    int main()
    { 
    	std::cout << "Hello World!" << std::endl;
    	return 0;
    }
`iostream` is input/output stream, a standard C++ header file

#### Another program to display "Hello World";

    #include <iostream>
    using namespace std;
    int main()
    { 
    	cout << "Hello World!" << endl;
    	return 0;
    }
`namespace` is a group of definition. It make possible for a program to use different objects with the same name. Here, `cout` and `endl` objects are defined in `std namespace`.
    
#### Scope of variable

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
