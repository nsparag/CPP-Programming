# Looping Statements
* for
* while
* do while

**Loop pillars**
* iterator
* start point
* conditions
* increment / decrement
* body

## for loop

Syntax:

    for(initialization; condition; increment/decrement){
      // loop body
      }

Example:

    for(int iterator=0; iterator<10 ; iterator++){
      std::cout << iterator;
    }

## for loop with multiple declarations

Syntax:

    for(initialization1 , initialization2, initialization3 ; condition; increment/decrement1, increment/decrement2, increment/decrement3){
      // loop body
      }

Example:

    for(int i = 0, j = 1, k = 10; j<10 ; i++, j++, k--){
      std::cout << i+j+k;
    }
