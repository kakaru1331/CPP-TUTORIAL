#include <iostream>

using namespace std;

int factorial(long n)
{
  if (n > 1)
    return n * factorial(n-1);
  else
    return 1;
}

int main()
{
  long num = 0;
  long ret = 0;

  while(true)
  {
    cout << "enter number (0 to exit)" << endl;
    cin >> num;

    if (num == 0)
      break;

    ret = factorial(num);
    cout << num << "!: " << ret << endl << endl;
  }

  return 0;
}