#include <iostream>
using namespace std;
class second;
class first
{
  private:
  int data1;
  public:
  first(int x)
  {
      data1 = x;

  }
  friend int sum(first, second);
};
class second
{
  private:
  int data2;
  public:
  second(int x)
  {
      data2 = x;
  }
  friend int sum(first, second);
};
int sum(first f, second s)
{
    return (f.data1+s.data2);
}
int main(void)
{
    first a(10);
    second b(15);
    cout<<"Sum is: "<<sum(a, b);

}