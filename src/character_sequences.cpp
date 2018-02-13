#include <iostream>
using namespace std;

int main()
{
  char ch[] = "Hello, world!";
  string str = ch;

  cout << str << endl; // string
  cout << str.c_str(); // c-string

}