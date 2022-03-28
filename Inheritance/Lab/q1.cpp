#include <iostream>
#define PI 3.14
using namespace std;

class dimension
{
  private:
  int r, h;


};
class cylinder:public dimension
{
  private:
  float tsa, csa, vol;
  public:
  void calculate(int r, int h)
  {
      csa = 2*PI*r*h;
      tsa = 2*PI*r*(h+r);
      vol = PI*r*r*h;
  }
  void display()
  {
      cout<<"CSA= "<<csa<<endl;
      cout<<"TSA= "<<tsa<<endl;
      cout<<"volume= "<<vol<<endl;
  }
};
int main(void)
{
    cylinder c;
    c.calculate(5, 7);
    c.display();

}