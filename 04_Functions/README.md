#### Standard C++ Library Functions

`sqrt()` is defined in `cmath`
`rand()` is defined in `cstdlib` 

#### User Defined Functions

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
