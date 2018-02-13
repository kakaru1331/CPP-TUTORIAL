#include <iostream>
using namespace std;

class Rectangle
{
  int width, height;

  public:
    Rectangle(int x, int y) : width(x), height(y) {}
    int area() { return width * height; }
};

int main()
{
  Rectangle rect(4,4);
  Rectangle * rectPtr1, * rectPtr2, * rectPtr3;

  rectPtr1 = &rect;
  rectPtr2 = new Rectangle (10,10);
  rectPtr3 = new Rectangle[2] { {2,2}, {3,3} };
  
  cout << "rect area: " << rect.area() << endl;
  cout << "rectPtr1 area: " << rectPtr1->area() << endl;
  cout << "rectPtr2 area: " << rectPtr2->area() << endl;
  cout << "rectPtr3[0] area: " << rectPtr3[0].area() << endl;
  cout << "rectPtr3[1] area: " << rectPtr3[1].area() << endl;

  delete rectPtr2;
  delete[] rectPtr3;

  return 0;
}