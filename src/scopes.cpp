#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  int y = 10;

  {
    int x = 100;
    y = 100;
    
    cout << "inner" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
  }

  cout << "outer" << endl;
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;

  return 0;
}