#include <iostream>
using namespace std;
/*
m to cm

*/
class gram
{
  float wt1;
  public:
  gram(){}
  gram(float g)
  {
      wt1=g;
  }
  void display()
  {
      cout<<"Gram: "<<wt1<<endl;
  }

};
class tola
{
  float wt2;
  public:
  tola(){}
  operator gram()
  {
      float g1;
      g1=wt2*11.664;
      return (gram(g1));
  }
  void input()
  {
      cout<<"Enter tola: "<<endl;
      cin>>wt2;
  }
};
int main(void)
{
    tola t1;
    gram g1;
    t1.input();
    g1=t1;
    g1.display();
}