#include <iostream>

using namespace std;

int main()
{
        float marks;
        cout << "Enter your marks: ";
        cin >> marks;
        cout << endl;
        if(marks>=90)
                cout << "You grade is 'O'!";
        else if(marks>=80)
                cout << "You grade is 'A+'!";
        else if(marks>=70)
                cout << "You grade is 'A'!";
        else if(marks>=60)
                cout << "You grade is 'B+'!";
        else if(marks>=50)
                cout << "You grade is 'B'!";
        else if(marks>=40)
                cout << "You grade is 'C'!";
        else
                cout << "You are failed!";
        return 0;

}
