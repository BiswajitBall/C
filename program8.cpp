//conditional ternary operator and comma operator  (C++ programming):
#include<iostream>

using namespace std;

int main()
{
  //variable declaration

  int a, b;
  int result1;

  //value assignment

  a = (b=7, b+2); //comma operator

  //expression

  //conditional ternary operator
  result1 = a < b ? a : b; // condition ? X : Y (If condition is True, returns X otherwise Y

  //output

  cout << result1 << endl;

  return 0;
}
