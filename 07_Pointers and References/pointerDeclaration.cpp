#include <iostream>
using namespace std;

int main()
{
  int varI = 5;  //integer variable declaration and initialization
  int *pointerVarI = &varI; //integer pointer variable declaration and initialization

  cout << "Value of variable (varI) :" << varI << endl;
  cout << "Address of variable (&varI) :" << &varI << endl;
  cout << "Value of pointer variable (pointerVarI) :" << pointerVarI << endl;
  cout << "value at address pointed by pointer variable (*pointerVarI) :" << *pointerVarI << endl;
  cout << "Address of pointer variable (&pointerVarI) :" << &pointerVarI << endl;

  cout << endl;

  float varF = 23.56;  //float variable declaration and initialization
  float *pointerVarF = &varF; //float pointer variable declaration and initialization

  cout << "Value of variable (varF) :" << varF << endl;
  cout << "Address of variable (&varF) :" << &varF << endl;
  cout << "Value of pointer variable (pointerVarF) :" << pointerVarF << endl;
  cout << "value at address pointed by pointer variable (*pointerVarF) :" << *pointerVarF << endl;
  cout << "Address of pointer variable (&pointerVarF) :" << &pointerVarF << endl;    
}
