#include <iostream>
using namespace std;

class Rectangle
{
  int width, height;

  public:
    void set_values (int, int);
    int area() { return width * height; }
};

void Rectangle::set_values(int width, int height)
{
  this->width = width;
  this->height = height;
}

int main()
{
  Rectangle rectangle;
  rectangle.set_values(3, 4);
  cout << "area: " << rectangle.area();

  return 0;
}