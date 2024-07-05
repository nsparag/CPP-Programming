# Operator Overloading

operator overloading allows you to redefine the behavior of standard operators (like +, -, *, =) for user-defined types (classes). 

Syntax:
````
ClassName& operator=(const ClassName& otherObject);
````

**Overloading Assignment Operator (`=`)**
* The assignment operator (=) is overloaded to define how an object of a class should be assigned values from another object of the same class.
* It's typically a member function of the class, taking a reference to the object being assigned from (const ClassName& otherObject) as an argument.

````
class Cube{
    private:
        double height = 1.0;
        double width = 1.0;
        double length = 1.0;
    public:
        Cube(){				// default constructor
            height = 1.0;
            width = 1.0;
            length = 1.0;
        }    
        Cube(double h, double w, double l){		// parameterize constructor
            height = h;
            width = w;
            length = l;
        }
        Cube(const Cube& cb){		// copy constructor
            height = cb.height;
            width = cb.width;
            length = cb.length;
        }
        void operator= (const Cube& cb){	//assignment operator
            height = cb.height;
            width = cb.width;
            length = cb.length;        
        }
};

int main() {
    Cube cube1(20,20,10);
    Cube cube2;
    
    cube2 = cube1;		// Calls the overloaded assignment operator
    
    return 0;
}
````

**Overloading Arithmatic Operator (`+`)**
* Enables to perform mathematical operations on objects of your class in a natural and intuitive way.
* Readability: Overloaded arithmetic operators make your code more readable and intuitive by allowing you to use familiar mathematical symbols with your custom class.
* Maintainability: It promotes code maintainability by enabling you to perform calculations on objects of your class in a consistent way.

````
class Complex {
  public:
    double real, imag;
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {    // Overloaded addition operator (+)
      return Complex(real + other.real, imag + other.imag);
  }
};

int main() {
  Complex c1(2, 3);
  Complex c2(4, 5);
  
  Complex c3 = c1 + c2;  // Calls the overloaded + operator
  
  // c3 will have real = 6 and imag = 8
}
````
