//precedence of operators (C++ programming):
#include<iostream>

using namespace std;

int main()
{ 
  //variable declaration and value assignment
  int a(5);        //constructor initialization
  int b{7};       //uniform initialization
  int c = 2;     //c-like initialization
  double result1, result2;

  //expression
  result1 = a + b % c;     //% is modulo operator which returns the remainder of a division
  result2 = (a + b)% c;

  //output
  cout << result1 << endl;
  cout << result2 << endl;
  return 0;
}
