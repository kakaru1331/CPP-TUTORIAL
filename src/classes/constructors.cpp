#include <iostream>
using namespace std;

class Rectangle
{
  int width, height;

  public:
    Rectangle(int, int);
    int area() { return width * height; }
};

Rectangle::Rectangle(int width, int height)
{
  this->width = width;
  this->height = height;
}

int main()
{
  Rectangle rectA(3,4);
  Rectangle rectB(10,15);

  cout << "rectA area: " << rectA.area() << endl;
  cout << "rectB area: " << rectB.area() << endl;

  return 0;
}