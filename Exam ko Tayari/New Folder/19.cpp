#include <iostream>
using namespace std;
class person
{
  char name[20];
  public:
  void get()
  {
      cout<<"Name: "<<endl;
      cin>>name;
  }
  void display()
  {
      cout<<"Name: "<<name<<endl;
  }
};
class employee
{
    int employeeID;
    public:
    void get()
  {
      cout<<"Employee ID: "<<endl;
      cin>>employeeID;
  }
  void display()
  {
      cout<<"Employee ID: "<<employeeID<<endl;
  }

};
class manager:public person, public employee
{
    int hr;
    public:
    void get()
    {
      person::get();
    employee::get();
    cout<<"Enter working hours: ";
    cin>>hr;
    }
    void display()
    {
      person::display();
      employee::display();
      cout<<"Working hours: "<<hr<<endl;
    }

};

int main(void)
{
  manager m;
  m.get();
  m.display();

}