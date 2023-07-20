#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int number = 34;
    cout << showbase << dec << number << endl; // to print number in decimal format
    cout << showbase << hex << number << endl; // to print number in hexadecimal format
    cout << showbase << oct << number << endl; // to print number in octal format
    cout << bitset<16>(number) << endl; // to print number in 16 bit binary format
    return 0;
}
