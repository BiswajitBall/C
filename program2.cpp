//Writting of strings in C++ programming
#include<iostream>
#include<string>

using namespace std;

int main()
{ //string mystring = "ABCD"; //c-like initialization
  //string mystring("abcd");     //constructor initialization
  string mystring{"1234"};    //uniform initialization
  cout << mystring <<endl;    //endl = ends the line 
  mystring = "Better to Reign in Hell than serve in Heaven";
  cout << mystring <<endl;
  return 0;
  
}
