#include <iostream>
#include <new>
using namespace std;

int main()
{
  int elem;
  int * ptr;
  
  cout << "How many numbers would you like to type? ";
  
  cin >> elem;  
  ptr = new (nothrow) int[elem];
  
  if (ptr == nullptr)
    cout << "Error: memory could not be allocated." << endl;
  else 
  {
    for (int i = 0; i < elem; i++)
    {
      cout << "Enter number: ";
      cin >> ptr[i];
    }
    
    cout << "Entered number: ";
    
    for (int j = 0; j < elem; j++)
    {
      cout << ptr[j] << ", ";
      
      delete[] ptr;
    }
  }

  return 0;
}