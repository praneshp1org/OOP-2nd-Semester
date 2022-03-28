#include <iostream>
#include <fstream>
using namespace std;
class employee
{
  char name[20];
  int id;
  public:
  void input()
  {
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter id: ";
      cin>>id;

  }
  void display()
  {
      cout<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;

  }
  void add()
  {
      fstream fin;
      employee e;
      fin.open("see.txt", ios::in|ios::out|ios::app);
      e.input();
      fin.write((char*)&e, sizeof(e));
      fin.close();

  }
  void displayAll()
  {
      fstream fout;
      employee e;
      fout.open("see.txt", ios::in);
      while(fout.read((char*)&e, sizeof(e)))
      {
          cout<<endl;
          //e.display();
          fout.read((char*)&e, sizeof(e));
      }
      fout.close();
  }
};
int main(void)
{
    employee e;
    e.add();
    e.displayAll();
}