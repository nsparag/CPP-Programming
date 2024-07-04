/* ********************************* NOTE ******************************** 
Pre-decrement and Post-decrement
********************************* note ******************************** */

#include <iostream>
using namespace std;
int main()
{
	int var0=0, var1=0, var2=0, var3=0;
	var0 = 55;
	var2 = 55;
	
	var1 = var0--;		//var0 value is first assigned to var1 and then var0 is decrement
	var3 = --var2;		//var2 value is first decrement and then assigned to var3
	
	cout << "var0 = " << var0 << endl;
	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;
	cout << "var3 = " << var3 << endl;
	return 0;
}

/* ********************************* Sample Outut ******************************** 
var0 = 54
var1 = 55
var2 = 54
var3 = 54
********************************* Outut ******************************** */
