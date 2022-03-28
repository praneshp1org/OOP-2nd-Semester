#include <iostream>
using namespace std;

class compare
{
  int x;
  public:
  void input()
  {
      cout<<"Enter number: ";
      cin>>x;
  }
  int operator >(compare c)
  {
      if(x>c.x)
      {
          return 1;
      }else
      {
          return 0;
      }
  }

};
int main(void)
{
    compare c1, c2;
    c1.input();
    c2.input();
    if(c1>c2)
    {
        cout<<"c1<c2"<<endl;
    }else
    {
        cout<<"c1>c2"<<endl;
    }
}