#include <iostream>
#include <fstream>

using namespace std;
class student
{
  int roll;
  char name[20];
  public:
  void getData()
  {
      cout<<"Enter name: "<<endl;
      cin>>name;
      cout<<"Roll: "<<endl;
      cin>>id;
  }
  void showData()
  {
      cout<<"Name: "<<name<<endl;
      cout<<"ID: "<<id<<endl;
  }
  int search(int r)
  {
      if(roll=r)
      {
          return 1;
      }else
      {
          return 0;
      }
  }
  void showResult()
  {
      student s;
      int roll;
      int flag=0;
      fstream fin;
      fin.open("student.txt", ios::in|ios::binary);
      cout<<"Roll no: "<<endl;
      cin>>roll;
      do
      {
          if(s.search(roll))
          {
              p.showData();
              flag=1;
              break;
          }
      }while(fin.read((char*)&s, sizeof(s)));
      if(flag=0)
      {
          cout<<"No result found...."<<endl;
          fin.close();
      }
  }
  void showResult()
  {
      
      do
      {
          cout<<""
      }while(ch=='y'||ch=='Y');
      
      
  }
  
};
int main(void)
{
    
}