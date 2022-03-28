#include <iostream>
using namespace std;

class B
{
  protected:
  int x;
  int y;
  public:
  B()
  {

  }
  void read()
  {
      cout<<"X in class B?";
      cin>>x;
      cout<<"Y in class B?";
      cin>>y;

  }
  void show()
  {
      cout<<"X in class B="<<x<<endl;
      cout<<"Y in class B="<<y<<endl;
  }
};
class D:public B
{
    protected:
    int y;
    int z;
    public:
    void read()
    {
        B::read();
        cout<<"Y in class D?";
        cin>>y;
        cout<<"Z in class D?";
        cin>>z;

    }
    void show()
    {
        B::show();
        cout<<"Y in class D="<<y<<endl;
      cout<<"Z in class D="<<z<<endl;
      cout<<"Y of B shown from D is "<<B::y;

    }

};
int main(void)
{
    D objD;
    cout<<"Enter data for object of class D.."<<endl;
    objD.read();
    objD.show();
}