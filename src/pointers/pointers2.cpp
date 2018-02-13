#include <iostream>
using namespace std;

int main()
{
  int num1 = 999, num2 = 9999;
  int * ptr1, * ptr2;

  ptr1 = &num1;
  ptr2 = &num2;

  *ptr1 = 1111; // num1 == 1111
  *ptr2 = 222; // num2 == 222

  ptr1 = ptr2; // ptr1 == &num2
  *ptr1 = 2222; // num2 == 2222

  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;

  return 0;
}