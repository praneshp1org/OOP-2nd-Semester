#include <iostream>
using namespace std;
template <class T=double, int size = 4>
class array
{
  T a[size];
  public:
  void input(T temp[])
  {
      for(int i=0; i<size; i++)
      {
          a[i]=temp[i];
      }
  }
  void display()
  {
      T sum=0;
      for(int i=0; i<size; i++)
      {
          sum+=a[i];
      }
      cout<<"Sum: "<<sum<<endl;
  }
};
int main(void)
{
    double d[] = {10.5, 10.6, 7.6, 6.3, 7.6};
    array<>ob1;
    ob1.input(d);
    ob1.display();
    int i[] = {10, 106, 76, 63, 6};
    array<int, 5>ob2;
    ob2.input(i);
    ob2.display();
}