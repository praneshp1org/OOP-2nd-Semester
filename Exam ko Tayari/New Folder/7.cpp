#include <iostream>
#include <cstdbool>
using namespace std;
class complex
{
  float r, i;
  public:
  complex()
  {
      r=0;
      i=0;

  }//default
  complex(float r1, float i1)
  {
      r=r1;
      i=i1;

  }//parameterized
  void operator +=(complex c)
  {
    r+=c.r;
    i+=c.i;
  }
  void show()
  {
    cout<<"Real: "<<r<<endl;
    cout<<"Imaginary: "<<i<<endl;
  }
};
int main(void)
{
  complex c1(4, 5), c2(1, 0);
  c1+=c2;
  c1.show();


}