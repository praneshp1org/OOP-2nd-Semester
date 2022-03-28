#include <iostream>
using namespace std;
class complex
{
    private:
    int real, img;
    public:
    complex(){}
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    complex add(complex c1, complex c2)
    {
        complex t;
        t.real = c1.real+c2.real;
        t.img = c1.img+c2.img;
        return t;

    }
    void display()
    {
        cout<<"Real: "<<real<<" +j"<<img<<endl;
    }
};
int main(void)
{
    complex c1(21, 3), c2(3, 20), c3;
    c3 = c3.add(c1, c2);
    c3.display();
}