#include <iostream>
using namespace std;

class Base
{
  public:
  Base()
  {
      cout<<"BAse called."<<endl;
  }
};
class Derived:public Base
{
    /*public:
    Derived()
    {
        cout<<"Derived called!";
    }
    */
};
int main(void)
{
    Derived objD;
}