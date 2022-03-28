#include <iostream>
#include <cmath>

using namespace std;
class Number
{
  double num;
  public:
  class NEG {};
  void read()
  {
      cout<<"Enter number: ";
      cin>>num;
  }
  double sqr()
  {
      if(num<0)
      {
          throw NEG();
      }else
      {
          return (sqrt(num));
      }
  }
};

int main(void)
{
    Number n;
    double result;
    n.read();
    try
    {
        cout<<"Trying to find square root...."<<endl;
        result  = n.sqr();
        cout<<"The square root is: "<<result<<endl;
    }catch(Number::NEG)
    {
        cout<<"Error..."<<endl;
    }
}