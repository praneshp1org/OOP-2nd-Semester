#include <iostream>
using namespace std;
//unary.cpp
class test
{
  int count;
  public:
  test()
  {

  }
  test(int i)
  {
      count  = i;
  }
  void operator ++()
  {
      //pre-unary
      count+=2;
  }
  void operator ++(int)
  {
      //post unary
      count +=3;
  }
  void display()
  {
      cout<<"Count: "<<count<<endl;
  }
};
int main(void)
{
    test t(1);
    ++t;
    t.display();//3
    t++;
    t.display();
}



