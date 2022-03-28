#include <iostream>
using namespace std;

class Book
{
  protected:
  int number;
  double price;
  public:
  Book(int a, double b)
  {
      number = a;
      price  = b;
  }
  ~Book()
  {
      cout<<"Base destructor called."<<endl;

  }
};
class subClass:public Book
{
  protected:
  int pages;
  public:
  subClass(int p, double q, int r):Book(p, q)
  {
      pages = r;
  }
  ~subClass()
  {
      cout<<"Sub class destructor"<<endl;

  }
};
class superSubClass:public subClass
{
  protected:
  double discount;
  public:
  superSubClass(int c, double d, int e, double f):subClass(c,d,e)
  {
      discount = f;
  }
  ~superSubClass()
  {
      cout<<"Supersub class destructor callled."<<endl;
  }
  void display()
  {
      cout<<"Number= "<<number<<endl;
      cout<<"Price = "<<price<<endl;
      cout<<"Pages = "<<pages<<endl;
      cout<<"Discount  = "<<discount<<endl;

  }
};
int main (void)

{
    superSubClass objD(1, 240.0, 405, 0.3);
    objD.display();
}