# include <iostream>
using namespace std;

int main() {

  char operatorSign;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> operatorSign; 

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(operatorSign) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Invalid Operator";
      break;
  }

  return 0;
}
