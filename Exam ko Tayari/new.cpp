#include <iostream>
using namespace std;
class complex
{
  int r, i;
  public:
  complex()
  {
    r=5;
    i=3;
  }
  complex(complex &c)
  {
    r=c.r;
    i=c.i;
  }
  void display()
  {
    cout<<r<<" +"<<i<<endl;
  }
};
int main(void)
{
  complex c;
  complex c1(c);
  c1.display();


}