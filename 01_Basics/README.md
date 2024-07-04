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
    
