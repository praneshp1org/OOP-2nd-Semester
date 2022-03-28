#include <iostream>
using namespace std;
class base1
{
  public:
  base1()
  {
      cout<<"Base1 constructor"<<endl;
  }
  ~base1()
  {
      cout<<"Base1 destructor"<<endl;
  }
};
class base2
{
  public:
  base2()
  {
      cout<<"Base2 constructor"<<endl;
  }
  ~base2()
  {
      cout<<"Base2 destructor"<<endl;
  }
};
class derived:public base2, public base1
{
  public:
  derived()
  {
      cout<<"Derived constructor"<<endl;
  }
  ~derived()
  {
      cout<<"Derived destructor"<<endl;
  }
};
int main(void)
{
    derived d;

}