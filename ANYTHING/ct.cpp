#include <iostream>
using namespace std;
template <class T>
class myPair
{
  T a, b;
  public:
  myPair(T f, T s)
  {
      a=f;
      b=s;
  }
  T getMax()
  {
      T r;
      r = (a>b)?a:b;
      return r;
  }
};
int main(void)
{
    myPair <int>p1(100, 75);
    cout<<p1.getMax()<<endl;

    myPair <float>p2(10.580, 750.96);
    cout<<p2.getMax()<<endl;
}