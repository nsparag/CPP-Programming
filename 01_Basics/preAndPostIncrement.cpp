/* ********************************* NOTE ******************************** 
Pre-increment and Post-increment
********************************* note ******************************** */

#include <iostream>
using namespace std;
int main()
{
	int var0=0, var1=0, var2=0, var3=0;
	var0 = 55;
	var2 = 55;
	
	var1 = var0++;		//var0 value is first assigned to var1 and then var0 is incremented
	var3 = ++var2;		//var2 value is first incremented and then assigned to var3
	
	cout << "var0 = " << var0 << endl;
	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;
	cout << "var3 = " << var3 << endl;
	return 0;
}

/* ********************************* Sample Outut ******************************** 
var0 = 56
var1 = 55
var2 = 56
var3 = 56
********************************* Outut ******************************** */
