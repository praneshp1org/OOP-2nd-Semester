#include <iostream>
using namespace std;
class base1
{
    public:

    base1(){
        cout<<"Base1 constructor called."<<endl;

    }
    ~base1()
    {
        cout<<"Base1 destructor called."<<endl;
    }
};
class base2
{
    public:

    base2(){
        cout<<"Base2 constructor called."<<endl;

    }
    ~base2()
    {
        cout<<"Base2 destructor called."<<endl;
    }
};
class derived:public base1, public base2
{
    public:

  derived()
  {
      cout<<"Derived constructor called"<<endl;

  }
  ~derived()
  {
      cout<<"Derived destructor called."<<endl;
  }
};
int main(void)
{
    derived d;

}