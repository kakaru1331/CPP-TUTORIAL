#include <iostream>
using namespace std;

int opt (int a, int b)
{
  return a+b;
}

double opt (double a, double b)
{
  return a/b;
}

int main()
{
  int x = 10, y = 3;
  double a = 10.0, b = 4.0;

  cout << opt (x, y) << endl;
  cout << opt (a, b) << endl;

  return 0;
}
