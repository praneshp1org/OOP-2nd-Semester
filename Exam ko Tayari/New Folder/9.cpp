#include <iostream>
using namespace std;
class matrix
{
  int a[3][3];
  public:
  matrix()
  {
      for(int i=0; i<3; i++)
      {
          for(int j=0; j<3; j++)
          {
              a[i][j]=0;
          }
      }

  }
  void set()
  {
      for(int i=0; i<3; i++)
      {
          for(int j=0; j<3; j++)
          {
              cin>>a[i][j];
          }
      }
  }
  void show()
  {
      for(int i=0; i<3; i++)
      {
          for(int j=0; j<3; j++)
          {
              cout<<a[i][j]<<" , ";
          }
          cout<<"\n";
      }
  }
  matrix operator +(matrix x)
  {
      matrix c;
      for(int i=0; i<3; i++)
      {
          for(int j=0; j<3; j++)
          {
              c.a[i][j] = a[i][j]+x.a[i][j];
          }
      }
      return c;
  }
};
int main(void)
{
    matrix a, b, c;
    a.set();
    cout<<"*****"<<endl;
    b.set();
    cout<<"*******"<<endl;
    c=a+b;
    c.show();
}