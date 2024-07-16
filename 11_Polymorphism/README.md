# Polymorphism

![text](https://media.geeksforgeeks.org/wp-content/uploads/20230127192347/Types-of-poymorphism.png)

# Function Overloading
C++ that allows you to define multiple functions with the same name, but with different parameter lists.
This enables you to create a family of related functions that perform similar tasks but can handle various data types or numbers of arguments.

# Operator Overloading
Operator overloading allows you to redefine the behavior of standard operators (like +, -, *, =) for user-defined types (classes).

# Function Overridding - Virtual Functions
* C++ allows a derived class to provide a specific implementation of a function that is already defined in its base class.
* It is achieved by adding `virtual` keyword before the function definition in the base class.
* The function to be called is determined at runtime based on the actual object type. This is achieved through dynamic binding, enabled by virtual functions.

Example:
````
class baseclass {
public:
	virtual void display(){
		cout << "this is base class!" << endl;
	}
};

class derivedclass: public baseclass {
public:
	void display(){
		cout << "this is derived class!" << endl;
	}
};

int main() {
	baseclass b1;
	b1.display();
	
	derivedclass d1;
	d1.display();
	
	baseclass *b2;
	b2 = &d1;	// Base class pointer pointing to a derived class object
		
	b2->display();	// Calls the overridden function based on the actual object type (derivedclass)
	
	return 0;
}
````
Sample Output:
````
this is base class!
this is derived class!
this is derived class!
````
### Advantages
* **Achieving Polymorphism** - Virtual functions enable polymorphism, which allows a function to behave differently based on the object that calls it.
* **Dynamic Binding (Late Binding)** - Virtual functions use dynamic binding (or late binding), where the actual function call is resolved at runtime based on the type of object pointed to or referenced by the base class pointer. This flexibility allows for decisions to be made dynamically at runtime rather than statically at compile-time.
* **Code Extensibility** - Virtual functions make it easier to extend the functionality of a base class without modifying its existing code.
