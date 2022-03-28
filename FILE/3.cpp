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
    student s[2];
    int i;
    ofstream outfile;
    outfile.open("sample.txt");

    for(i=0; i<2; i++)
    {
        cout<<"Enter details: "<<endl;
        cin>>s[i].name>>s[i].add>>s[i].id;
        outfile<<s[i].name<<endl<<s[i].add<<s[i].id<<endl;
    }
    outfile.close();
    ifstream infile;
    infile.open("sample.txt");
    cout<<"Details is: "<<endl;
    for(i=0; i<2; i++)
    {
        infile>>s[i].name>>s[i].add>>s[i].id;
        cout<<"Name: "<<s[i].name<<endl;
    }
    infile.close();
}