//program to check whether a given number is even of odd using a bitwise operator.
#include <iostream>

using namespace std;

int main(){
    int num = 8;
    if(num&1)
        cout<< num << " is ODD number " << endl;
    else
        cout<< num << " is EVEN number " << endl;

    return 0;
}
