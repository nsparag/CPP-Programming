#include <iostream>
using namespace std;

int main()
{
        bool imageColor = true;
        if (imageColor)
                cout << "Yes, the image is colorful" << endl;
        else
                cout << "Image is black and while" << endl;
}

/* ********************** Sample Output **********************
Yes, the image is colorful
********************** Sample Output ********************** */

#include <iostream>
using namespace std;

int main()
{
        bool comparison;
        int num1 = 5, num2 = 2;
        comparison = num1 > num2;       //check if num1 is greater than num2
        if (comparison)
                cout << num1 << " is greater than " << num2 << endl;
        else
                cout << num1 << " is smaller than " << num2 << endl;
}

/* ********************** Sample Output **********************
5 is greater than 2
  ********************** Sample Output ********************** */
