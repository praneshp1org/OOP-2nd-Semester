#include <iostream>
#include <math.h>
using namespace std;

class complex
{
  int real, img;
  public:
  void getData()
  {
      cout<<"Enter real part: "<<endl;
      cin>>real;
      cout<<"Enter imaginary part: "<<endl;
      cin>>img;

  }
  float operator < (complex c)
  {
      float m1= sqrt(real*real+img*img);
      float m2 = sqrt(c.real*c.real+c.img*c.img);
      return (m1<m2)?true:false;

  }
  float operator > (complex c)
  {
      float m1= sqrt(real*real+img*img);
      float m2 = sqrt(c.real*c.real+c.img*c.img);
      return (m1>m2)?true:false;

  }
  float operator = (complex c)
  {
      float m1= sqrt(real*real+img*img);
      float m2 = sqrt(c.real*c.real+c.img*c.img);
      return (m1==m2)?true:false;

  }
  void display()
  {
      if(img<0)
      {
          cout<<'\n'<<real<<"-i"<<(img*-1);
      }
      else
      {
          cout<<"\n"<<real<<"+i"<<img;
      }
  }
};
int main(void)
{
    complex c1, c2;
    c1.getData();
    c2.getData();
    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl;

    if(c1<c2)
    {
        cout<<"First is smaller"<<endl;
    }
    else if(c1>c2)
    {
        cout<<"Second is smaller"<<endl;
    }
    else
    {
        cout<<"Both are equal"<<endl;
    }
}