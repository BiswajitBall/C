//area of a cirle (C++ programming):
#include<iostream>

using namespace std;

//constant declaration
const double pi = 3.14159;
const char newline = '\n';

int main()

{
   //variavle declaration
   double r, area;

   //assign values
   r = 2.0;

   //area
   area = pi*r*r;

   //output
   cout << "Area of the circle: " <<  area ;
   cout << newline;

   return 0;
}
