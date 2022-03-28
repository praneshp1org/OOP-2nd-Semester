#include <iostream>
using namespace std;
/*
tola class to gram class

*/
class gram
{
  //destination
  float g;
  public:
  gram(){}
  gram(float gg)
  {
      g = gg;
  }
  void display()
  {
      cout<<"Gram: "<<g<<endl;
  }

};
//source
class tola
{
    float t;
    public:
    tola()
    {

    }
    operator gram()
    {
        float g;
        g = t*11.664;
        return (gram(g));
    }
    void input()
    {
        cout<<"Enter tola: "<<endl;
        cin>>t;
    }
};

int main(void)
{
    tola t;
    gram g;
    t.input();
    g=t;
    g.display();
}