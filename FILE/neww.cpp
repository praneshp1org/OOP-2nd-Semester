//2075 Ashwin
#include <iostream>
#include <fstream>
using namespace std;

class employee
{
  char name[20];
  int ID;
  public:
  void input()
  {
      cout<<"Name: "<<endl;
      cin>>name;
      cout<<"ID: "<<endl;
      cin>>ID;

  }
  void display()
  {
      cout<<"Employee ID: "<<ID<<endl;
      cout<<"Employee Name: "<<name<<endl;

  }
  void add()
  {
      fstream fin;
      employee e;
      fin.open("employee1.txt", ios::app|ios::out);
      //cout<<"Employee record: "<<endl;
      e.input();
      fin.write((char*)&e, sizeof(e));
      fin.close();
  }
  void displayAll()
  {
      fstream fout;
      employee e;
      fout.open("employee1.txt", ios::in);
      while(fout.read((char*)&e, sizeof(e)))
      {
          e.display();

      }
      fout.close();
  }
};
int main(void)
{
    //cout<<"Enter details: "<<endl;
    employee e1[4];
    /*e1.add();
    e1.displayAll();*/
    int i;
    for(i=0; i<4; i++)
    {
        e1[i].add();
    }
    /*for(i=0; i<10; i++)
    {
        e1[i].displayAll();
    }*/
    for(i=0; i<1; i++)
    {
        e1[i].displayAll();
    }
}