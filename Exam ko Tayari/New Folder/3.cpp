#include <iostream>
using namespace std;
class complex
{
    float r, i;
    public:
    complex(){}
    complex(float x, float y)
    {
        r=x;
        i=y;
    }
    complex operator +(complex c)
    {
        complex c1;
        c1.r = r+c.r;
        c1.i = i+c.i;
        return c1;
    }
    void display()
    {
        cout<<"Adter sum...."<<endl;
        cout<<"Real: "<<r<<" ,imaginary: "<<i<<endl;
    }
};

int main(void)
{
    complex c1(1, 2), c2(4, 3), c3;
    c3 = c1+c2;
    c3.display();
}