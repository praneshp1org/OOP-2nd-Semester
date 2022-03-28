#include <iostream>
using namespace std;
//cm --> m
class meter
{
  float l;
  public:
  meter(){}
  meter(float x)
  {
      l = x/100;

  }
  void show()
  {
      cout<<"Length in meter: "<<l<<endl;
  }
};

int main(void)
{
    meter m;
    float l;
    cout<<"Enter length in cm: "<<endl;
    cin>>l;
    m=l;
    m.show();
}