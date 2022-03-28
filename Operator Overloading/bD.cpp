#include <iostream>
using namespace std;

class Distance
{
  int ft, inch;
  public:
  void input()
  {
      cout<<"Enter feet and inch: "<<endl;
      cin>>ft>>inch;

  }
  Distance operator *(Distance d)
  {
      Distance t;
      t.inch = inch+d.inch;
      t.ft = ft+t.ft+(t.inch/12);
      t.inch = (t.inch%12);
      return t;
  }
  void display()
  {
      cout<<"Feet = "<<ft<<" ,inch = "<<inch<<endl;
  }
};
int main(void)
{
    Distance d1, d2, d3;
    d1.input();
    d2.input();
    d3 = d1*d2;
    d3.display();
}