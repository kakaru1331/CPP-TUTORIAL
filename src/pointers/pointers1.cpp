#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  int * numPtr;

  numPtr = &num1;
  *numPtr = 100;

  numPtr = &num2;
  *numPtr = 200;

  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;

  return 0;
}