# Conditional Statements

* if
* if else
* switch case

## if
Syntax:

    if(<condition>{
        // statements to be executed if the condition is true
    }

Example:

    bool signal_ON = true;
    if(signal_on){
      std::cout << "You can move ahead";
    }

## if else
Syntax:

    if(<condition>{
        // statements to be executed if the condition is TRUE
    }
    else{
        // statements to be executed if the condition is FALSE
    }

Example:

    bool signal_ON = false;
    if(signal_on){
      std::cout << "You can move ahead";
    }
    else{
      std::cout << "stop";
    }

## if with initializer
Syntax:'

    if(initialization, <condition>{
        // statements to be executed if the condition is TRUE
    }
    else{
        // statements to be executed if the condition is FALSE
    }

Example:
```
if(bool signal_ON = false, signal_on){
  std::cout << "You can move ahead";
}
else{
  std::cout << "stop";
}
```
