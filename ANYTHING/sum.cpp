/*
Overloading binary plus operator to add data members of two
different objects //C++
*/
#include <iostream>
using namespace std;
class sum
{
  private:
  int a;
  public:
  void input() //input
  {
     cout<<"Enter number: ";
     cin>>a;
  }
  //overloading +
  sum operator *(sum s)
  {
     sum s1;
     s1.a = a+s.a;
     return s1;
  }
  void display()
  {
      cout<<"Sum: "<<a;
  }
};
int main(void)
{
    sum s1, s2, s3;
    s1.input();
    s2.input();
    s3 = s1*s2;
    s3.display();
}
