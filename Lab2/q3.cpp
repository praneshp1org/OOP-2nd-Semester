#include <iostream>
using namespace std;

class distances
{
  private:
  int mm, cm, m;
  public:
  void input()
  {
      cout<<"Enter distance: "<<endl;
      cin>>m>>cm>>mm;
  }
  distances add(distances d1, distances d2)
  {
      distances d3;
      d3.mm = d1.cm+d2.cm;
      d3.cm = d1.m+d2.m+((d3.mm)/100);
      d3.m = d1.m+d2.m+((d3.cm/100));
      d3.mm = (d3.mm)%100;
      d3.cm = (d3.cm)%100;
      return d3;
  }
  void display()
  {
      cout<<"Sum is: "<<m<<"m, "<<cm<<"cm and"<<mm<<endl;
  }
};
int main(void)
{
    distances d1, d2, d3;
    d1.input();
    d2.input();
    d3 = d3.add(d1, d2);
    d3.display();
}