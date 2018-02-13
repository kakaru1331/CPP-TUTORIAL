#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
  string title;
  int year;
};

int main()
{
  string str;

  movies_t movie;
  movies_t * moviePtr;
  moviePtr = &movie;

  cout << "Enter title: ";
  getline(cin, moviePtr->title);
  cout << "Enter year: ";
  getline(cin, str);
  (stringstream) str >> moviePtr->year;

  cout << "Entered" << endl;
  cout << moviePtr->title << " (" << moviePtr->year << ")" << endl;

  return 0;
}