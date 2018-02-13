#include <iostream>
using namespace std;

namespace str
{
  string str1 = "hello";
  string str2 = "world!";
}

namespace num
{
  double num1 = 3.33;
  double num2 = 6.66;
}

int main()
{
  using namespace str;

  cout << str1 << endl;
  cout << str2 << endl;
  cout << num::num1 << endl;
  cout << num::num2 << endl;

  return 0;
}