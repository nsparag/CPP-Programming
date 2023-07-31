# include <iostream>
using namespace std;

int main() {

  char string_var[] = "hello";
  int i = 0;
  while (string_var[i] != '\0')
  {
    string_var[i] = string_var[i]-32; // ASCII of A= 65 & a = 97; difference between capital and small letters is 32
    cout << string_var[i] << endl;
    i++;
  }
  cout << string_var << endl;
  
  return 0;
}
