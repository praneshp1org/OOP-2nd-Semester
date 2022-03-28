#include <iostream>
using namespace std;
class complex
{
    private:
    int real, img;
    public:
    complex() //default constructor
    {
        real=5;
        img=2;

    }
    void display()
    {
        cout<<"Real = "<<real<<endl<<"Imaginary = "<<img<<endl;
    }
};
int main(void)
{
    complex c;
    c.display();
}