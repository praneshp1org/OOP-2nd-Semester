#include <iostream>
using namespace std;
class complex
{
    private:
    int real, img;
    public:
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    complex(complex &x)
    {
        real = x.real;
        img = x.img;
    }
    void display()
    {
        cout<<"Real: "<<real<<" Imaginary: "<<img<<endl;

    }
};
int main(void)
{
    complex c(10, 15);
    c.display();
    complex c1(c);
    c1.display();
}