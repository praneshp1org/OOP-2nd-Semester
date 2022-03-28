#include <iostream>
using namespace std;
class base
{
  public:
  base()
  {
      cout<<"Base constructor."<<endl;
  }
  ~base()
  {
      cout<<"Base desrtuctor"<<endl;
  }
};
class derived:public base
{
  public:
  derived()
  {
      cout<<"Derived constructor."<<endl;
  }
  ~derived()
  {
      cout<<"Derived destructor."<<endl;
  }
};
class dderived:public derived
{
  public:
  dderived()
  {
      cout<<"Dderived constructor."<<endl;
  }
  ~dderived()
  {
      cout<<"Dderived destructor."<<endl;
  }
};
int main(void)
{
    dderived dd;
}+