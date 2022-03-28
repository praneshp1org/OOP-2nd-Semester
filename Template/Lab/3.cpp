#include <iostream>
using namespace std;
template <class T>
class myPair
{
  T a, b;
  public:
  myPair(T first, T second)
  {
      a=first;
      b=second;
  }
  T getMax();
};
template <class T>
T myPair<T>::getMax()
{
    T val;
    val = (a>b)?a:b;
    return val;
}
int main(void)
{
    myPair<int> myObj(100, 75);
    cout<<myObj.getMax();
}