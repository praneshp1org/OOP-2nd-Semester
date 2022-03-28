#include <iostream>
using namespace std;
template <class T>
class myClass
{
  T a, b;
  public:
  myClass(T first, T second)
  {
      a = first;
      b = second;

  }
  T getMax()
  {
      T val;
      val = (a>b)?a:b;
      return val;

  }
};
int main(void)
{
    myClass<int> o1(10, 4);
    myClass<float> o2(10.2, 10.3);
    cout<<o1.getMax()<<endl;
    cout<<o2.getMax()<<endl;
}