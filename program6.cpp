//compound assignment (C++ programming):
#include<iostream>

using namespace std;

int main()
{
  //variable declaration and value assignment

  double a(5);  //constructor initialization
  double b{7};  //uniform initialization
  double c = 2; //c-like initialization
  double d = 4;


  //expression
  a += 1 ; //a = a + 1
  b -= 1 ; //b = b - 1
  c *= 2 ; //c = c*2
  d /= 2 ; //d = d/2

  //output
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  return 0;
}
