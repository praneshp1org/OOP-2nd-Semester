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
  test operator --() //pre unary
  {
      test t1; // temporary
      t1.count = count+1; //t1 ko count ko value change
      return t1;
  }
  test operator --(int)
  {
      test t2;
      t2.count = count - 2;
      return t2;
  }
  void display()
  {
      cout<<"The count is: "<<count<<endl;
  }
};
int main(void)
{
    test t;
    t.input();
    t = --t;//suruko -- wala
    t.display();
    t = t--;
    t.display();
}