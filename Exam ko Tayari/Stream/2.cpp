#include <iostream>
#include <fstream>

using namespace std;
class student
{
  char name[20];
  int id;
  public:
  void input()
  {
      cout<<"Name: "<<endl;
      cin>>name;
      cout<<"ID: "<<endl;
      cin>>id;
  }
  void display()
  {
      cout<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;
  }
  void add()
  {
      student s;
      fstream fin;
      fin.open("st.txt", ios::app|ios::out);
      s.input();
      fin.write((char*)&s, sizeof(s));
      fin.close();
  }
  void displayy()
  {
      fstream fout;
      student s;
      fout.open("st.txt", ios::in|ios::binary);
      while(fout.read((char*)&s, sizeof(s)))
      {
          s.display();
      }
      fout.close();
  }
};

int main(void)
{
    student s;
    s.add();
    cout<<"***************"<<endl;
    s.displayy();
}