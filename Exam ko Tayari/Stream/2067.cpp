#include <iostream>
#include <fstream>
using namespace std;

class student
{
  char name;
  int id;

  public:
  void get()
  {
      cout<<"Enter name: ";
      cin>>name;
      cout<<"\nEnter ID: "<<endl;
      cin>>id;
  }
  void show()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id;
  }
  void write2()
  {
    fstream fin;
    student s1;
    fin.open("st.txt", ios::binary|ios::out);
    //cout<<"Enter student data: "<<endl;
    s1.get();
    fin.write((char*)&s1, sizeof(s1));
    fin.close();
  }
  void read()
  {
    fstream fout;
    student s1;
    fout.open("st.txt", ios::in|ios::binary);
    while(fout.read((char*)&s1, sizeof(s1)));
    {
      s1.show();
    }
    fout.close();
  }
};
int main(void)
{
  student s;
  s.write2();
  s.read();
}