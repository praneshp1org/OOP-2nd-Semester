#include <iostream>
#include <fstream>
using namespace std;
class student
{
  public:
  char name[20], add[20];
  int id;

};
int main(void)
{
    student s;
    ofstream out("sample.txt");
    //Writing to file
    cout<<"Enter name, address and id: "<<endl;
    cin>>s.name>>s.add>>s.id;
    out<<s.name<<endl;
    out<<s.add<<endl;
    out<<s.id<<endl;
    out.close();

    /*//Reading from file
    ifstream in("sample.txt");
    in>>s.name>>s.add>>s.id;
    cout>>s.name>>endl;
    //>>s.add>>endl>>s.id>>endl;

    in.close();*/
}