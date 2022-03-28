#include <iostream>
using namespace std;

class complex
{
  private:
  int real, img;
  public:
  complex()
  {
      real = 25;
      img = 2;

  }
  complex (complex &x)
  {
      real = x.real;
      img = x.img;
  }
  void display()
  {
      cout<<"real = "<<real<<endl<<"imaginary = "<<img<<endl;
  }
};
int main(void)
{
    complex c;
    c.display();
    complex c1(c);
    c1.display();
}