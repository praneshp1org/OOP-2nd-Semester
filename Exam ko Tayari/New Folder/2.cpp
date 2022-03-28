#include <iostream>
using namespace std;
class sum
{
  int a;
  public:
  sum(){}
  sum(int b)
  {
      a = b;
  }
  sum operator +(sum s)
  {
      sum s1;
      s1.a = a+s.a;
      return s1;
  }
  void display()
  {
      cout<<"Sum: "<<a<<endl;
  }
};
int main(void)
{
    sum s1(10);
    sum s2(15);
    sum s3;
    s3 = s1+s2;
    s3.display();
}