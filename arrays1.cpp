#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{
  for (int i = 0; i < length; i++)
    cout << arr[i] << ' ';

  cout << endl;
}

int main()
{
  int arr1[] = {1, 3, 5};
  int arr2[] = {2, 4, 6, 8, 10};

  printArray(arr1, 3);
  printArray(arr2, 5);
}