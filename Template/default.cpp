#include <iostream>
using namespace std;
template <class T=double, int size=4>
class Array
{
  T a[size];
  public:
  void input(T *temp)
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
      cout<<"Sum is "<<sum<<endl;
  }
};
int main(void)
{
    int temp[] = {1, 2, 3, 4, 5};
    Array<int, 5>obj1;
    obj1.input(temp);
    double d[] = {10.2, 2.3, 4, 4.9, 9.6, 78.6};
    Array<>obj2;
    obj2.input(d);
    obj1.display();
    obj2.display();
}