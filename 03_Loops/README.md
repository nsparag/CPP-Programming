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

### for loop with multiple declarations

Syntax:

    for(initialization1 , initialization2, initialization3 ; condition; increment/decrement1, increment/decrement2, increment/decrement3){
      // loop body
      }

Example:

    for(int i = 0, j = 1, k = 10; j<10 ; i++, j++, k--){
      std::cout << i+j+k;
    }

### range-based for loop
1

    int group[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int value : group}
        std::cout << value << endl;

2

    for(int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}}
        std::cout << value << endl;

3

    for(auto value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}}
        std::cout << value << endl;

## while loop

Syntax:

    while(condition){
      // loop body
      }

Example:

    while(iterator<10){
      std::cout << iterator;
      iterator++;
    }
