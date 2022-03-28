#include <iostream>
using namespace std;

//order of constructor in multilevel inheritance

class base
{
    public:

    base()
      {
      cout<<"Base constructer."<<endl;

    }
    ~base()
    {
      cout<<"Base destructor called."<<endl;
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"Derived constructor called."<<endl;
    }
    ~derived()
    {
        cout<<"Derived destructor called."<<endl;
    }
};
class dderived:public derived
{
  public:
  dderived()
  {
      cout<<"dderived constructor called."<<endl;

  }
  ~dderived()
  {
      cout<<"dderived destructor called."<<endl;
  }
};
int main(void)
{
    dderived d;
}