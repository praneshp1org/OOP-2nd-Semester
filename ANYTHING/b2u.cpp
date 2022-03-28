#include <iostream>
using namespace std;
/*
cm to m
basic to class type
*/
class meter
{
  float length;
  public:
  meter(){}
  meter(float l) //constructor function
  {
      length = l/100;
  }
  void show()
  {
      cout<<"Length in m: "<<length<<endl;
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