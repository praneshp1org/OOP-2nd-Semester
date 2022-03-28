#include <iostream>
using namespace std;
class Animal
{
  public:
  virtual void display()
  {
      cout<<"Base class animal..."<<endl;
  }
};
class Dog:public Animal
{
  public:
  void display()
  {
      cout<<"Derived class Dog."<<endl;
  }
};
class Cow:public Animal
{
  public:
  void display()
  {
      cout<<"Dderived class Cow."<<endl;
  }
};
int main(void)
{
    Animal *panm;
    Animal anm;
    Dog d;
    Cow c;
    panm = &anm;
    panm->display();

    panm = &d;
    panm->display();
    panm = &c;
    panm->display();

}