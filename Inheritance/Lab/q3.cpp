#include <iostream>
using namespace std;
class B //base class
{
    protected:
    int x, y;
    public:
    B()
    {

    }
    void read()
    {
        cout<<"X in class B? ";
        cin>>x;
        cout<<"Y in class B? ";
        cin>>y;
    }
    void show()
    {
        cout<<"X in class B: "<<x<<endl;
        cout<<"Y in class B: "<<y<<endl;
    }
};
class D: public B
{
    protected:
    int y, z;
    public:
    void read()
    {
        B::read();
        cout<<"Y in class D? ";
        cin>>y;
        cout<<"Z in class D? ";
        cin>>z;
    }
    void show()
    {
        B::show();
        cout<<"Y in class B: "<<y<<endl;
        cout<<"Z in class B: "<<z<<endl;

    }
};
int main(void)
{
    D objD;
    //objD.base::read();
    objD.read();
    //objD.base::read();
    objD.show();
}