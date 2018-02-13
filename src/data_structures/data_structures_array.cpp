#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
  string title;
  int year;
} films[3];

void printMovie(movies_t movie);

int main()
{
  string str;
  
  for (int i = 0; i < 3; i++)
  {
    cout << "Enter title: ";
    getline(cin, films[i].title);
    
    cout << "Enter year: ";
    getline(cin, str);
    stringstream(str) >> films[i].year;
  }

  cout << endl << "Entered movies" << endl;
  for (int j = 0; j < 3; j++)
  {
    printMovie(films[j]);
  }

  return 0;
}

void printMovie(movies_t movie)
{
  cout << movie.title << " (" << movie.year << ")" << endl;
}