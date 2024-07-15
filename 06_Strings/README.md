# String

String is collection of characters terminated by a null character (\0).

To use the `std::string` type, we need to include the `<string>` header in our program

````
#include <string>
int main(){
    std::string s = "Hello World.";
}
````
### Accessing Characters
````
int main()
{
    std::string s = "Hello World!";
    char c1 = s[4]    // provides o
    char c2 = s.at(4  )  // provides o
}
````

### Concatenating Strings
````
#include <iostream>
#include <string>
int main()
{
    std::string s = "Hello ";
    s += "World.";
    s +='!';
    std::cout << s;
}
````

### Comparing Strings
````
int main()
{
    std::string s1 = "Hello";
    if (s1 == "Hello")
        std::cout << "The string is equal to \"Hello\"";
}
````

## String Input
Use the `std::getline` because our string can contain white spaces. And if we used the `std::cin` function alone, it would accept only a part of the string until a white space.
````
int main()
{
    std::string s;
    std::cout << "Please enter a string: ";
    std::getline(std::cin, s);
    std::cout << "You entered: " << s;
}
````
## A Pointer to a String
String has a member function `.c_str()` which returns a pointer to its first element
````
int main()
{
    std::string s = "Hello World.";
    std::cout << s.c_str();
}
````

## Substrings

use the `.substr()` member function to create a substring from a string
Syntax: `.substring(starting_position, length)`

````
#include <string>
int main()
{
    std::string s = "Hello World.";
    std::string mysubstring = s.substr(6, 5);
    std::cout << "The substring value is: " << mysubstring;
}
````
Output: `The substring value is: World`

### Finding a Substring
To find a substring in a string, we use the `.find()` member function. It searches for the substring in a string. 
* If the substring is found, the function returns the position of the first found substring.
* If the substring is not found, the function returns a value that is `std::string::npos`

````
int main()
{
    std::string s = "This is a Hello World string.";
    std::string stringToFind = "Hello";
    std::string::size_type found = s.find(stringToFind);
    if (found != std::string::npos)
      std::cout << "Substring found at position: " << found;
    else
      std::cout << "The substring is not found.";   
}
````
Output: Substring found at position: 10
