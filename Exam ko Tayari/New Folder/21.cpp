#include <iostream>
#include <fstream>

using namespace std;
class employee
{
    int id;
    char name[20];
    public:
    void input()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter ID: "<<endl;
        cin>>id;
    }
    void output()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
    void addRecord()
    {
        fstream fin;
        employee e[5];
        fin.open("21.txt", ios::binary|ios::app|ios::out);
        cout<<"Enter records."<<endl;
        for(int i=0; i<5; i++)
        {
            e[i].input();
            fin.write((char*)&e, sizeof(e));
        }
        fin.close();
    }
    void displayRecord()
    {
        fstream fout;
        employee e[5];
        fout.open("21.txt", ios::binary|ios::in);
        cout<<"Entered Records."<<endl;
        for(int i=0; i<5; i++)
        {
            fout.read((char*)&e, sizeof(e));
            e[i].output();
        }
        fout.close();
    }

};
int main(void)
{
    employee e;
    e.addRecord();
    cout<<"*******"<<endl;
    e.displayRecord();
}