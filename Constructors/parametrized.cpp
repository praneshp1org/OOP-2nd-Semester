#include <iostream>
using namespace std;
class complex
{
  private:
  int real, img;
  public:
  complex()
  {
      real = 5;
      img = 2;
  }
  complex(int r, int i)
  {
      real=r;
      img = i;
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

    complex c1(10, 5);
    c1.display();

}