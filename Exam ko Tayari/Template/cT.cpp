makd cT#include <iostream>
using namespace std;
/*
template <class T>
class class_name
{
  private:
  //.....
  public:
  //.....
};
accessing
class_name <data_type> object_name;


*/
template <class T>
class myMax
{
  T a, b;
  public:
  myMax(T f, T s)
  {
      a=f;
      b=s;
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
    myMax <int> o1(10, 30);
    cout<<o1.getMax()<<endl;
}