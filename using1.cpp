#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 1.11;
  double y = 2.22;
}

int main()
{
  using first::x;
  using second::y;

  cout << "first x:" << x <<endl;
  cout << "second y:" << y << endl;
  cout << "first y: " << first::y << endl;
  cout << "second x: " << second::x << endl;

  return 0;
}