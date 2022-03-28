#include <iostream>
using namespace std;
/*
degree to radian
*/
class radian
{
  float rad;
  public:
  radian(){rad=0.0;}
  radian(float r)
  {
      rad = r;
  }
  float getRadian()
  {
      return rad;
  }
  void display()
  {
      cout<<"Radian: "<<rad<<endl;
  }
};
class degree
{
  float deg;
  public:
  degree(){deg=0.0;}
  void input()
  {
      cout<<"Enter degree: ";
      cin>>deg;
  }
  operator radian()
  {
      float r;
      r = deg*3.14/180.0;
      return (radian(r));
  }
};
int main(void)
{
    radian r;
    degree d;
    d.input();
    r=d;
    r.display();
}