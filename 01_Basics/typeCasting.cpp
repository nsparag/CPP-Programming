/* ********************************* NOTE ******************************** 
Type Casting
********************************* note ******************************** */

#include <iostream>
using namespace std;
int main()
{
	int varInt = 10;
	double varDouble = 22.34;
	cout << "varDouble = " << varDouble << endl;
	
	varInt = int(varDouble); 	// casts double value into int value
	cout << "varInt = " << varInt << endl;
	return 0;
}

/* ********************************* Sample Outut ******************************** 
varDouble = 22.34
varInt = 22
********************************* Outut ******************************** */
