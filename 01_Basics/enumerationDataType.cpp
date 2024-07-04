/* ********************************* NOTE ******************************** 
enumeration data types; The below two programs works exactly the same.
********************************* note ******************************** */

#include <iostream>
using namespace std;
int main()
{
	enum Month {Red, Blue, Green};
	cout << "The color Blue is present at " << Blue << " number." << endl;
	return 0;
}

/* ********************************* Sample Outut ******************************** 
The color Blue is present at 1 number.
********************************* Outut ******************************** */

#include <iostream>
using namespace std;
int main()
{
	const int Red=0;
	const int Blue=1;
	const int Green=2;
	cout << "The color Blue is present at " << Blue << " number." << endl;
	return 0;
}

/* ********************************* Sample Outut ******************************** 
The color Blue is present at 1 number.
********************************* Outut ******************************** */
