#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    char name[20];
    ofstream out("student.txt");
    cout<<"Name: ";
    cin>>name;
    out<<"Name: "<<name<<endl;
    out.close();
}