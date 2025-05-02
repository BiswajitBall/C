//operating with variables (C++ programming):
#include<iostream>
using namespace std;

int main()
{  //declare the variables:
   int a = 2;  //c-like initialization
   int b(5);   //constructor initialization
   int c{5};   //uniform initialization
   int result;
   //process:
   //a = 2;
   //b = 3;
   //c = 5;
   result = (a*b)/c;
   //print result:
   cout << result;
   //terminate the program:
   return 0;
   
}
