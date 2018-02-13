#include <iostream>
using namespace std;

#define PI 3.14159

class Circle 
{
  double radius;

  public:
    Circle(double r) : radius(r) {}
    
    double area() { return radius * radius * PI; }
};

class Cylinder
{
  Circle base;
  double height;

  public:
    Cylinder(double r, double h) : base (r), height(h) {}
    
    double volume() { return base.area() * height; }
};

int main()
{
  Cylinder foo(10, 20);

  cout << "Cylinder volume: " << foo.volume() << endl;

  return 0;
}