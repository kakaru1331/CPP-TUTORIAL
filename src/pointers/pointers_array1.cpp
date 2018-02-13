#include <iostream>
using namespace std;

int main()
{
  int numArr[5];
  int * ptr;
  
  ptr = numArr;
  *ptr = 1;

  ptr++;
  *ptr = 2;

  ptr = &numArr[2];
  *ptr = 3;

  ptr = numArr + 3;
  *ptr = 4;

  ptr = numArr;
  *(ptr+4) = 5;

  for (int i = 0; i < 5; i++)
    cout << "numArr[" << i << "]: " << numArr[i] << endl;

  return 0;
}