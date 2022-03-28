#include <iostream>
#include <fstream>

using namespace std;
class employee
{
    public:
  char name[20], add[20];
  int id;

};
int main(void)
{
    employee e;

    ofstream outfile;//writing to file
    outfile.open("employee.txt");
    cout<<"Enter details: "<<endl;
    cin>>e.name>>e.add>>e.id;
    outfile<<e.name<<endl<<e.add<<endl<<e.id<<endl;
    outfile.close();

    ifstream infile;//reading from file
    infile.open("employee.txt");
    cout<<"Details are: "<<endl;
    infile>>e.name>>e.add>>e.id;
    cout<<"Name: "<<e.name<<endl<<"Address: "<<e.add<<endl<<"ID: "<<e.id<<endl;
    infile.close();

}