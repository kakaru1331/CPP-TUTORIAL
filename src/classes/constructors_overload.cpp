#include <iostream>
using namespace std;

class Rectangle
{
  int width, height;

  public:
    Rectangle();
    Rectangle(int, int);
    
    int area() { return (width * height); }
};

Rectangle::Rectangle()
{
  width = 3;
  height = 3;
}

Rectangle::Rectangle(int width, int height)
{
  this->width = width;
  this->height = height;
}

int main()
{
  Rectangle rectA;
  Rectangle rectB(6,6);

  cout << "rectA area: " << rectA.area() << endl;
  cout << "rectB area: " << rectB.area() << endl;

  return 0;
}