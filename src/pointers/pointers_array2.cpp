#include <iostream>
using namespace std;

int main()
{
  int numArr[5] = {0, 2, 4, 6, 8};
  int * ptr;
  
  ptr = numArr;
  cout << "*ptr++: " << *ptr++ << endl;
  cout << "*ptr: "<< *ptr << endl << endl;
  
  ptr = numArr;
  cout << "*++ptr: " << *++ptr << endl;
  cout << "*ptr: "<< *ptr << endl << endl;

  ptr = numArr;
  cout << "++*ptr: " << ++*ptr << endl;
  cout << "*ptr: "<< *ptr << endl << endl;

  ptr = numArr;
  cout << "(*ptr)++: " << (*ptr)++ << endl;
  cout << "*ptr: "<< *ptr << endl << endl;
}