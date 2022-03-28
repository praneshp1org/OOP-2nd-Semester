#include <iostream>
using namespace std;
class complex
{
  int real, img;
  public:
  complex(){}
  complex(int r, int i)
  {
      real = r;
      img = i;
  }
  complex add(complex c1, complex c2)
  {
      complex temp;
      temp.real = c1.real+c2.real;
      temp.img = c1.img+c2.img;
      return temp;
  }
  void display()
  {
      cout<<"Complex No: "<<endl;
      cout<<real<<" + "<<img<<"i"<<endl;
  }

};
int main(void)
{
    complex c1(1, 2);
    complex c2(2, 3);
    complex c3, c4;
    c4=c3.add(c1, c2);
    c4.display();
}
