#include <iostream>
using namespace std;
template <class T1=int, class T2=float>
class myClass
{
  public:
  T1 a;
  T2 b;
  myClass(T1 p, T2 q)
  {
      a=p;
      b=q;
  }
  void show()
  {
      cout<<"The value of a is "<<a<<endl;
      cout<<"The value of b is "<<b<<endl;
  }
};
int main(void){
    myClass <>mc(4, 6.5);
    mc.show();
}