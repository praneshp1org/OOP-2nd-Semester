#include <iostream>
using namespace std;
class matrix
{
  int a[3][3];
  int b[3][3];
  public:
  matrix()
  {
      int i, j;
      for(i=0; i<3; i++)
      {
          for(j=0; j<3; j++)
          {
              cin>>a[i][j];
          }
      }
  }
  void transpose()
  {
      for(int i=0; i<3; i++)
      {
          for(int j=0; j<3; j++)
          {
              b[i][j] = a[j][i];
          }
      }
  }
  void display()
  {
      for(int i=0; i<3; i++)
      {
          for(int j=0; j<3; j++)
          {
              cout<<b[i][j]<<" ";
          }
          cout<<endl;
      }
  }
};
int main(void)
{
    cout<<"Enter matrix elements serially: "<<endl;
    matrix m;
    m.transpose();
    m.display();
}