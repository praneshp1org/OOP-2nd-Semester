#include <iostream>
using namespace std;

class test
{
  private:
  int count;
  public:
  void input()
  {
      cout<<"Enter count: "<<endl;
      cin>>count;
  }
  void operator ++()
  {
      count = count+5; //pre umary operator overloading
  }
  void operator ++(int)
  {
      count = count - 2; //post unary operator overloading
  }
  void display()
  {
      cout<<"Count is: "<<count<<endl;
  }
};
int main(void)
{
    test t;
    t.input();
    ++t;
    t.display();
    t++;
    t.display();
}