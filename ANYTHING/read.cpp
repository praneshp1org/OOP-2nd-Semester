#include <iostream>
#include <fstream>
using namespace std;
class employee
{
  char dep[5];
  int roll;
  public:
  void input()
  {
      cout<<"Enter department: ";
      cin>>dep;
      cout<<""<<endl;
      cout<<"Enter roll number: ";
      cin>>roll;
  }
  void display()
  {
      cout<<"Department: "<<dep<<endl;
      cout<<"Roll No: "<<roll<<endl;
  }
  void add()
  {
      fstream fin;
      employee e;
      fin.open("employee.txt", ios::out);
      e.input();
      fin.write((char*)&e, sizeof(e));
      fin.close();
  }
  void displayAll()
  {
      fstream fout;
      employee e;
      fout.open("employee.txt", ios::in);
      while(fout.read((char*)&e, sizeof(e)))
      {
          e.display();
      }
      fout.close();
  }
};
int main(void)
{
    cout<<"Enter details: "<<endl;
    employee e;
    /*e.add();
    e.displayAll();*/
    for(int i=0; i<5; i++)
    {
        e[i].add();
    }
    for(int i=0; i<2; i++)
    {
        e[i].displayAll();
    }
}