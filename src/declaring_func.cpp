#include <iostream>

using namespace std;

void odd(int x);
void even(int x);

int main()
{
  int num = 0;

  
  while(true) {
    cout << "enter number plz! (0 to exit)" << endl;
    cin >> num;
    
    if(num == 0)
    {
      cout << "good good bye~!" << endl;
      break;
    }

    odd(num);
    
    cout << endl;
  }

  return 0;
}

void odd(int x)
{
  if((x%2) != 0)
   cout << "It is odd!" << endl;
  else
    even(x);
}

void even(int x)
{
  if(x%2 == 0)
    cout << "It is even!" << endl;
  else
    odd(x);
}