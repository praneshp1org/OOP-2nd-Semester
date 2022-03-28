
/*
#1 WAP to write details of a student in a file named student.txt. Also scan the data from the file and display it to console.
//Code

*/
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

    ofstream outfile;//writing to file
    outfile.open("student.txt");
    cout<<"Enter details: "<<endl;
    cin>>s.name>>s.add>>s.id;
    outfile<<s.name<<endl<<s.add<<endl<<s.id<<endl;
    outfile.close();

    ifstream infile;//reading from file
    infile.open("student.txt");
    cout<<"Details are: "<<endl;
    infile>>s.name>>s.add>>s.id;
    cout<<"Name: "<<s.name<<endl<<"Address: "<<s.add<<endl<<"ID: "<<s.id<<endl;
    infile.close();

}