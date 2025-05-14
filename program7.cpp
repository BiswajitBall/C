//increment and decrement (C++ programming):
#include<iostream>

using namespace std;

  //global variable declaration
  const char tab = '\t';

int main()
{
  //variable declaration and value assignment

  int a(5);  //constructor initialization
  int b{4};  //uniform initialization
  int result1, result2;


  //expression

  result1 = ++a; // a = a + 1 and result1 is the value of a after being increased
  result2 = b++; // b = b + 1 and result2 is the value of b had before being increased

  //output

  cout << result1 << tab  << a << endl;
  cout << result2 << tab << b << endl;

  return 0;
}
