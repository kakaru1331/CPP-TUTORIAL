#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
} m1, m2;

void printMovie(movies_t movie);

int main()
{
  string title;
  string year;

  m1.title = "5 meters per second";
  m1.year = 2007;
  
  cout << "Enter title: ";
  getline(cin, title);

  cout << "Enter year: ";
  getline(cin, year);

  stringstream(title) >> m2.title;
  stringstream(year) >> m2.year;

  printMovie(m1);
  printMovie(m2);

  return 0;
}

void printMovie(movies_t movie)
{
  cout << "title: " << movie.title;
  cout << " (" << movie.year << ")" <<endl << endl;
}