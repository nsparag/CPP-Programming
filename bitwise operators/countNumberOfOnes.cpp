#include <iostream>

using namespace std;

int main() {
    int num=7,flag=0;
    while(num!=0)
    {
        if(num&1)
            flag++;
        num=num>>1;
    }
    cout << "Number of 1's in given number = " << flag;
    return 0;
}
