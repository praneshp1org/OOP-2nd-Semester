#include <iostream>
using namespace std;

class sum
{
  private:
  int a;
  public:
  void input()
  {
      cout<<"enter a: "<<endl;
      cin>>a;
  }
  sum operator +(sum s)
  {
      sum s1;
      s1.a = a+s.a; //inmplicit pass ra explicit pass
      return s1;
  }
  void display()
  {
    cout<<"a = "<<a<<endl;
  }
};
int main(void)
{
  sum s1, s2, s3;
  s1.input();
  s2.input();
  s3 = s1+s2;
  s3.display();
}