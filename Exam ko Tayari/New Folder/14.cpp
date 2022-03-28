#include <iostream>
#include <fstream>

using namespace std;
class client
{
    int id;
    char name[20];
    public:
    void input()
    {
        cout<<"Enter name and id: "<<endl;
        cin>>name>>id;
    }
    void display()
    {
        cout<<"Name: "<<name<<" ID: "<<id<<endl;
    }
    void add()
    {
        fstream fin;
        client c;
        fin.open("14.txt", ios::out|ios::app);
        cout<<"Library rcord: "<<endl;
        c.input();
        fin.write((char*)&c, sizeof(c));
        fin.close();
    }
    void displayAll()
    {
        fstream fout;
        client c;
        int i=0;
        fout.open("14.txt", ios::in);
        while(fout.read((char*)&c, sizeof(c)))
        {
           c.display();
            i++;
        }


        cout<<"Number of records: "<<i<<endl;
        fout.close();
    }
};

int main(void)
{
    client c1;
    c1.add();
    cout<<"*****"<<endl;
    c1.displayAll();

}