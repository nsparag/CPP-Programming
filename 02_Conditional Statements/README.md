# Conditional Statements

* if
* if else
* switch case

#### if
Syntax:

    if(<condition>{
        // statements to be executed if the condition is true
    }

Example:

    bool signal_ON = true;
    if(signal_on){
      std::cout << "You can move ahead";
    }

#### if else
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

#### if with initializer
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
#### Short Circuit
The compount statements that includes && and || will not evaluate the second operand of the compound statement unless necessary

        int main()
        {
        	int m, n;
        	m = 10;
         	n = 20;
         	if(m < 10 && n == 20)
         		cout << "n==20 not evaluated"; //Here, the first statement m<10 is FALSE and whatever is the value of second operand, the final result will be FALSE; Hence, n==20 will not be evaluated
         	if(m >= 10 && n == 20)
        		cout << " m>=10 and n==20 evaluated"; //Here, the first statement m>=10 is TRUE and then the final answer will be dependent on second operand, hence both statements will be evaluated 
         	if(m < 10 || n == 20)
         		cout << "n==20 not evaluated"; //Here, the first statement m<10 is FALSE and then the final answer will be dependent on second operand, hence both statements will be evaluated 
         	if(m >= 10 && n == 20)	
        		cout << " m>=10 and n==20 evaluated"; //Here, the first statement m>=10 is TRUE and whatever is the value of second operand, the final result will be TRUE; Hence, n==20 will not be evaluated
        	return 0;
        }
