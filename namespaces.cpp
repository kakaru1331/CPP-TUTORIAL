#include <iostream>
using namespace std;

namespace foo
{
  int value() { return 5; }
}

namespace bar
{
  const double PI = 3.14159;
  double value() { return 2 * PI; }
}

int main()
{
  cout << foo::value() << endl;
  cout << bar::value() << endl;
  cout << bar::PI << endl;

  return 0;
}