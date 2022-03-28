#include <iostream>
#include <fstream>
using namespace std;
class employee
{
    int id;
    public:
    void input()
    {
        cout<<"Enter ID: "<<endl;
        cin>>id;
    }
    void display()
    {
        cout<<"ID: "<<id<<endl;
    }
};

int main(void)
{
    employee e[5];
    fstream file;
    file.open("employee.dat", ios::out);
    for(int i=0; i<5; i++)
    {
        e[i].input();
        file.write((char*)&e, sizeof(e));
    }
    file.close();
    fstream ffile;
    ffile.open("employee.dat", ios::in);
    for(int i=0; i<5; i++)
    {
        ffile.read((char*)&e, sizeof(e));
        e[i].display();
    }
    ffile.close();
}