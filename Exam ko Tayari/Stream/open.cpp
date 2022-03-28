#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    char name[20];
    int id;
    //writing to a file
   /* ofstream outfile("contact.txt");
    cout<<"Name: "<<endl;
    cin>>name;
    outfile<<name<<endl;
    cout<<"ID: "<<endl;
    cin>>id;
    outfile<<id<<endl;*/
    ifstream infile("contact.txt");
    infile>>name;
    infile>>id;
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;

}