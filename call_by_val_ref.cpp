#include <iostream>

using namespace std;

void val (int a, int b, int c)
{
  a += 1;
  b += 2;
  c += 3;  
}

void ref (int& a, int& b, int& c)
{
  a += 1;
  b += 2;
  c += 3;
}

void print (int a, int b, int c)
{
  cout << "1st:" << a << " " << "2nd:" << b << " " << "3rd:" << c << endl;
}

int main()
{
  int a, b, c;
  a=b=c=0;

  val (a, b, c);
  print (a, b, c); // a == b == c == 0

  ref (a, b, c);
  print (a, b, c); // a == 1, b == 2, c == 3
}