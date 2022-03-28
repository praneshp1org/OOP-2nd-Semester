#include <iostream>
#include <fstream>

using namespace std;
class employee
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
};

int main(void)
{
    employee e[10];
    fstream file;
    file.open("emp.txt", ios::binary|ios::out);
    cout<<"Details fill up..."<<endl;
    for(int i=0; i<4; i++)
    {
        e[i].read();
        file.write((char*)&e, sizeof(e));

    }
    //file.seekg(0);
    file.close();
    fstream filep;
    filep.open("emp.txt", ios::in);
    cout<<"********* ******* ***** **"<<endl;
    for(int j=0; j<4; j++)
    {
        file.read((char*)&e, sizeof(e));
        e[j].show();
    }
    file.close();
}