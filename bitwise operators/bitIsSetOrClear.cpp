#include <iostream>

using namespace std;

int main(){
    int num=16777215,p=20,tempVariable;
    tempVariable=num&1<<p;
    if(tempVariable==1<<p)
        cout << p << "th bit of "<< num << " is SET";
    else
        cout << p << "th bit of "<< num << " is CLEAR";

    return 0;
}
