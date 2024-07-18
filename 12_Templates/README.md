# Templates
* Templates are mechanisms to support the so-called generic programming.
* Generic broadly means we can define a function or a class without worrying about what types it accepts.
* uses two keywords `template` and `typename`
  
syntax:
````
template <typename T>
// the rest of our function or class code
````

## Function Template
Using template functionality, we can create function templates that can accept any data type.

**Example 1: Only 1 function argument**
````
template <typename T>
void myfunction(T param)
{
	std::cout << "The value of a parameter is: " << param << '\n';
}
int main()
{
	myfunction<int>(123);
	myfunction<double>(123.456);
	myfunction<char>('A');
}
````
Output:
````
The value of a parameter is: 123
The value of a parameter is: 123.456
The value of a parameter is: A
````
**Example 1: 2 function argument**
````
template <typename T, typename U>
void myfunction(T param1, U param2)
{
	std::cout << "The values of a parameter 1 & 2: " << param1 << " & " << param2 << '\n';
}
int main()
{
	myfunction<int>(123, 123.456);
	myfunction<double>(123.456, 'A');
	myfunction<char>('A', 123);
}
````
Output:
````
The values of a parameter 1 & 2: 123 & 123.456
The values of a parameter 1 & 2: 123.456 & A
The values of a parameter 1 & 2: A & 123
````
# Class Template
* a class template is a mechanism that allows you to define a class with generic types.
* create a single class template that can work with different data types without rewriting the class implementation for each type.

Syntax:
````
template <class T>
class MyTemplate {
    // Class definition
};

````
Example:
````
template <class T>
class MyTemplate {
private:
    T data;
public:
    T getData(){	// getter to get the 'data' value
	return data;	
    }
    void setData(T variable){	// setter to set the 'data' value
	data = variable;	
    }
};
int main(){
    MyTemplate<int> obj1;
    obj1.setData(10);
    MyTemplate<char> obj2;
    obj1.setData('$');
}
````
