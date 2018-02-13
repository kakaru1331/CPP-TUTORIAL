#include <iostream>
using namespace std;

template <class T>
T sum (T num1, T num2)
{
  T ret;
  ret = num1 + num2;
  return ret;
}

int main() 
{
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;

  k = sum<int>(i,j);
  h = sum<double>(f,g);

  cout << k << endl;
  cout << h << endl;
}