#include <iostream>
using namespace std;

void increase (void* data, int size)
{
  if (size == sizeof(char))
  {
    char * chPtr;
    chPtr = (char *)data;
    ++(*chPtr);
  }
  else if (size == sizeof(int))
  {
    int * iPtr;
    iPtr = (int *)data;
    ++(*iPtr);
  }
}

int main()
{
  char str = 'A';
  int num = 0;

  increase(&str, sizeof(str));
  increase(&num, sizeof(num));

  cout << str << endl;
  cout << num << endl;

  return 0;
}