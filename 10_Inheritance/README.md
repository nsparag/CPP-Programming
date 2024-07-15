# Inheritance

* Building a class from an existing class.
* A class can be derived from an existing class. This is known as inheritance

Syntax:
````
class MyBaseClass
{
};
class MyDerivedClass : public MyBaseClass
{  // MyDerivedClass inherits the MyBaseClass
};
````
## Accessibility of members

|  Accessiability  |  Public Members  |  Protected Members  |  Private Members  |
| ----------------|------------------|---------------------|-------------------|
|  Base Class    |  Yes              |  Yes                 |  Yes    |
|  Derived Class    |  Yes              |  Yes                 |  NO    |

## Inheritance and Accessiability

| Base Class Access Specifier | Public  |  Protected  | Private  |
|-----------------------------|---------|-------------|----------|
|  Public  | Public  |  Protected  | Private  |
|  Protected  | Protected  |  Protected  | Private  |
|  Private  | Not Accessiable  |  Not Accessiable  | Not Accessiable  |
