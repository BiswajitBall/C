//global and local variables (C++ programming):
#include<iostream>
using namespace std;

//global variable declaration
int g = 1;

int main()
{  //local variable declaration
   int a, b, c;

   //asiign value to variables
   a=2;
   b=3;
   c=(a+b)/g;

   //output
   cout << c << endl;
   return 0;
}
