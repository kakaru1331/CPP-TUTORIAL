#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str = "one_two_three_four";

  for(char c : str)
  {
    cout << "< " << c << " >";
  }

  cout << endl;
}