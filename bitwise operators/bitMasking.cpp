#include <iostream>
using namespace std;

#define SET(x,p) x|=(1<<p)
#define CLEAR(x,p) x&=~(1<<p)
#define TOGGLE(x,p) x^=(1<<p)

int main() {
    int x=5, p=1;
    SET(x,p);
    cout << x;      //to set p bit

    CLEAR(x,p);
    cout << x; //to clear p bit

    TOGGLE(x,p);
    cout << x; //to toggle p bit
    return 0;
}
