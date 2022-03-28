#include <iostream>
using namespace std;
class amount
{
  int x;
  public:
  void input()
  {
      cout<<"Enter amount: "<<endl;
      cin>>x;

  }
  int operator >(amount y)
  {
      return (x>y.x)?1:0;
  }
  int operator <(amount y)
  {
      return (x<y.x)?1:0;
  }
};
int main(void)
{
    amount a1, a2;
    a1.input();
    a2.input();
    if(a1>a2)
    {
        cout<<"First is greater than second.";
    }
    else if(a1<a2)
    {
        cout<<"First is lesser than second"<<endl;
    }
}