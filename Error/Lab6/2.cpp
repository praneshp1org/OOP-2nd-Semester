#include <iostream>
#include <cmath>
using namespace std;
class Number
{
  double num;
  public:
  class NEG{};
  void read()
  {
      cout<<"Enter no: ";
      cin>>num;
  }
  double sqroot()
  {
      if(num<0)
      {
          throw NEG();
      }
      else
      {
          return sqrt(num);
      }
  }
};
int main(void)
{
    Number n1;
    double result;
    n1.read();
    try
    {
        cout<<"Trying to find square root....."<<endl;
        result = n1.sqroot();
        cout<<"Square root is "<<result<<endl;

    }catch(Number::NEG)
    {
        cout<<"Square root of negative no is not possible";
    }
}