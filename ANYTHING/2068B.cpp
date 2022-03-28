#include <iostream>
using namespace std;
template <class T, int size>
class array
{
  T a[size];
  public:
  void input()
  {
      cout<<"Enter array elements: "<<endl;
      for(int i=0; i<size; i++)
      {
          cin>>a[i];
      }
  }
  void display()
  {
      cout<<"Array elements: "<<endl;
      for(int i=0; i<size; i++)
      {
          cout<<a[i]<<endl;
      }
  }

  void ascending()
  {
      T temp;
      for(int i=0; i<size-1; i++)
      {
          for(int j=i+1; j<size; j++)
          {
              if(a[j]<a[i])
              {
                  temp = a[i];
                  a[i] = a[j];
                  a[j] = temp;
              }
          }
      }
  }
  void getMin()
  {
      T m = a[0];
      for(int i=1; i<size; i++)
      {
          if(a[i]<m)
          {
              m=a[i];
          }
      }
      cout<<"The minimum value is: "<<m<<endl;
  }
  void getMax()
  {
      T m = a[0];
      for(int i=1; i<size; i++)
      {
          if(a[i]>m)
          {
              m=a[i];
          }
      }
      cout<<"The maximum value is: "<<m<<endl;
  }

};
int main(void)
{
    array<int, 5> a1;
    a1.input();
    a1.ascending();
    a1.display();
    a1.getMin();
    a1.getMax();
}