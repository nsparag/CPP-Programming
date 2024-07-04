### Standard C++ Library Functions

`sqrt()` is defined in `cmath`
`rand()` is defined in `cstdlib` 

### User Defined Functions

A user defined function has Three important parts:
* Function Declaration
* Function Definition
* Function Call
  
Here is simple example of max function which finds maximum of two numbers.

**Function Declaration**
  
Syntax:
````
return_type name_of_function (list of parameter types)
````

Example
  
````
int max(int, int);
````

**Function Definition**

Function Definition containes the function body. 
Syntax:
````
int max(int var1, int var2)
{
  return var1>var2 ? var1:var2;  // returns maximum of var1 or var2
}
````

**Function Call**

Function is called inside main function or inside some other function
````
int main()
{
  int maxvalue = max(10,20);  // function call
  cout << maxvalue << endl;
  return 0;
}
````
### Inline Function

* When you declare a function as inline, we're suggesting to the compiler that it should substitute the function's code wherever the function is called.
* By avoiding function call overhead, inline functions can improve performance for small and frequently called functions.

Syntax and Example
````
inline int square(int x) {
  return x * x;
}

int main() {
  int result = square(5); // Here, the compiler might inline the square function's code directly into this call.
  return 0;
}
````

### Function Overloading

* C++ that allows you to define multiple functions with the same name, but with different parameter lists.
* This enables you to create a family of related functions that perform similar tasks but can handle various data types or numbers of arguments.
````
int add(int, int);
double add(int, double);
int add(int, int, int);
double add(int, int, double);
double add(int, double, int);

int main()
{
  cout << add(10, 5) << endl;
  cout << add(10, 20.45) << endl;
  cout << add(10, 5, 20) << endl;
  cout << add(10, 5, 20.45) << endl;
  cout << add(10, 20.45, 5) << endl;
}

int add(int a, int b){
  return a+b
}
double add(int a, double b){
  return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
double add(int a, int b, double c){
  return a+b+c;
}
double add(int a, double b, int c){
  return a+b+c;
}
````
