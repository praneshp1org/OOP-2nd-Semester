//display result in main

#include <iostream>
using namespace std;

class complex
{
    private:
    int a, b;
    public:


    void input()
    {
        cout<<"Real and imaginary part: "<<endl;
        cin>>a>>b;
    }
    complex add(complex c1, complex c2)
    {
        complex c3;
        c3.a = c1.a+c2.a;
        c3.b = c1.b+c2.b;
        return c3;
    }
     void display()
    {

        cout<<"Real= "<<a<<" imaginary: "<<b;
    }
};
int main(void)
{
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c3.add(c1, c2);
    c3.display();

}