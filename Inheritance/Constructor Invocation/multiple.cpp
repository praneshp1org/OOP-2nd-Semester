#include <iostream>
using namespace std;
class base1
{
  public:
  base1()
  {
      cout<<"This is base1 "<<endl;
  }
};
class base2
{
  public:
  base2()
  {
      cout<<"This is base2 "<<endl;
  }
};
class derived:public base2, public base1
{
  public:
  derived()
  {
      cout<<"This is derived."<<endl;
  }
};
int main(void)
{
    derived d;

}