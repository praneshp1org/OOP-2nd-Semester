#include <iostream>
using namespace std;
template <class T, int size>
class array
{
  T a[size];
  public:
  void input()
  {

      for(int i=0; i<size; i++)
      {
          cin>>a[i];
      }
  }
  void display()
  {
      for(int i=0; i<size; i++)
      {
          cout<<a[i]<<endl;
      }

  }
  T min()
  {
      T m = a[0];
      for(int i=1; i<size; i++)
      {
          if(a[i]<m)
          {
              m=a[i];
          }
      }
      return m;
  }
  T max()
  {
      T max = a[0];
      for(int i=0; i<size; i++)
      {
          if(a[i]>max)
          {
              max = a[i];
          }
      }
      return max;
  }
  void ascending()
  {
      T temp;
      for(int i=0; i<size-1; i++)
      {
          for(int j=i+1; j<size; j++)
          {
              if(a[i]>a[j])
              {
                  temp = a[i];
              a[i]=a[j];
              a[j]=temp;
              }
          }
      }
      cout<<"In ascending order....."<<endl;

  }
};
int main(void)
{
    array<int, 5>a1;
    a1.input();
    cout<<"Minimum: "<<a1.min()<<endl;
    cout<<"Maximum: "<<a1.max()<<endl;
    a1.ascending();
    a1.display();

}