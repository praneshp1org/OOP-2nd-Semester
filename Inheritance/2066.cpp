#include <iostream>
using namespace std;
class student
{
  protected:
  char name[20];
  int age;
  public:
  void display()
  {
      cout<<"Name: "<<name<<endl;
      cout<<"Age: "<<age<<endl;

  }
};
class employee
{
  protected:
  char name[20];
  int age;
  double salary;
  public:
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Salary: "<<salary<<endl;
  }
};
class manager:public student, public employee
{
  char company[20];
  public:
  void input()
  {
    cout<<"Name: ";
    cin>>student::name;
    cout<<"Age: ";
    cin>>student::age;
    cout<<"Salary: ";
    cin>>salary;
    cout<<"Company: ";
    cin>>company;
  }
  void display()
  {
    cout<<"Salary= "<<salary;
    cout<<"Company name = "<<company;
  }
};
int main(void)
{
  manager m;
  m.input();
  m.student::display();
  m.display();
}