#include <iostream>
#include <fstream>

using namespace std;

class student
{
  private:
  char name[20];
  int id;
  public:
  void input()
  {
      cout<<"Enter name: "<<endl;
      cin>>name;
      cout<<"Enter id: "<<endl;
      cin>>id;

  }
  void display()
  {
      cout<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;

  }
  void add()//writing to file
  {
      fstream fin;
      student s;
      fin.open("student1.txt", ios::out);
      cout<<"Enter employee records: "<<endl;
      s.input();
      fin.write((char*)&s, sizeof(s));
      fin.close();
  }
  void displayAll()
  {
      fstream fout;
      student s;
      fout.open("student1.txt", ios::in);
      while(fout.read((char*)&s, sizeof(s)))
      {
          s.display();
      }
      fout.close();
  }
};
int main(void)
{
    cout<<"Enter details of students: "<<endl;
    student s[3];
    for(int i=0; i<3; i++)
    {
        s[i].add();
    }
    cout<<"**********"<<endl;
    for(int i=0; i<5; i++)
    {
        s[i].display();
    }
}