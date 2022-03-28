#include <iostream>
using namespace std;
class distances
{
  private:
  int feet, inch;
  public:
  distances()
  {
      feet=0;
      inch=0;
  }
  distances(int f, int i)
  {
      feet = f;
      inch = i;
  }
  void add(distances d1, distances d2)
  {
      inch = d1.inch+d2.inch;
      feet = d1.feet+d2.feet+(inch/12);
      inch = (inch%12);
  }
  void display()
  {
      cout<<"Feet = "<<feet<<endl<<"Inch = "<<inch<<feet<<endl;
  }
};
int main(void)
{
    distances d1(3, 7), d2(1, 5), d3;
    d3.add(d1, d2);
    d3.display();
}