#include <iostream>

using namespace std;

int divide (int a, int b=2) 
{
  int ret;
  
  ret = a / b;

  return ret;
}

int main()
{
  int a = 10, b = 5;
  int ret = 0;

  ret = divide (a);
  cout << ret << endl; // result: 5 (10/2) default
  
  ret = divide (a, b);
  cout << ret << endl; // result: 2 (10/5)
}