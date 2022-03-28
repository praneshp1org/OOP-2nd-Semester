#include <iostream>
#include <fstream>
using namespace std;

class library
{
  char bookName[20];
  int bookID;
  public:
  void input()
  {
      cout<<"Book Name: ";
      cin>>bookName;
      cout<<"ID: ";
      cin>>bookID;
  }
  void output()
  {
      cout<<"Name: "<<bookName<<"\t"<<"ID: "<<bookID<<endl;
  }
  void add()
  {
      fstream fin;
      fin.open("library.txt", ios::app|ios::out|ios::binary);
      library l;
      l.input();
      fin.write((char*)&l, sizeof(l));
      fin.close();
  }
  void retrieve()
  {
      fstream fout;
      fout.open("Library.txt", ios::in);
      library l;


      while(fout.read((char*)&l, sizeof(l)))
      {
        l.output();
      }



      fout.close();
  }

};
int main(void)
{
    library l1;
    l1.add();
    cout<<"*****"<<endl;
    l1.retrieve();
}