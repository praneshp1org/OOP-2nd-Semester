#include <iostream>
#include <fstream>

using namespace std;
class student
{
    int id;
    char name[20];
    public:
    void read()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter ID: "<<endl;
        cin>>id;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
    void showRecord()
    {
    student s;
    fstream fout;
    fout.open("23.txt", ios::in);
    while(fout.read((char*)&s, sizeof(s)))
    {
        s.show();
    }
    fout.close();

}
    void inputRecord()
    {
    student s;
    fstream f;
    f.open("23.cpp", ios::app|ios::out);
    s.read();
    f.write((char*)&s, sizeof(s));
    f.close();
}

};




int main(void)
{
    student s[2];
    for(int i=0; i<2; i++)
    {
        s[i].inputRecord();
    }
    cout<<"******"<<endl;
    for(int i=0; i<2; i++)
    {
        s[i].showRecord();
    }
}   ksksks      *          s5 sks      *       