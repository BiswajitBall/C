// range based for loop (C++ programming)
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str {"Biswajit Ball"};
  for (char c : str)
  {
    cout << "[" << c << "]";
  }
  cout << '\n';
}
