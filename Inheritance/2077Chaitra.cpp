#include <iostream>
using namespace std;
class marks
{
    protected:
    float m0, m1, m2;
    public:
    void get()
    {
        cout<<"Enter roll no: "<<endl;
        cin>>m0;
        cout<<"Enter two marks: "<<endl;
        cin>>m1>>m2;

    }

};
class sports
{
    protected:
    float sm;
    public:
    void getsm()
    {
      cout<<"Enter sports marks: "<<endl;
      cin>>sm;
    }
};
class calculation:public marks, public sports
{
    float total, avg;
    public:
    void display()
    {
        total = m1+m2+sm;
        avg = total/3;
        cout<<"Roll no = "<<m0<<endl;
        cout<<"Total marks = "<<total<<endl;
        cout<<"Average marks = "<<avg<<endl;
    }
};
int main(void)
{
    calculation c;
    c.get();
    c.getsm();
    c.display();
}