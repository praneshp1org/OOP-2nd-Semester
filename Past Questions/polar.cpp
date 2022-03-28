#include <iostream>
#include <math.h>
using namespace std;
//recrtangle => polar
class Polar //destination
{
    float radius, theta;
    public:
    Polar()
    {
        radius = 0;
        theta = 0;

    }
    Polar(float rad, float thet)
    {
        radius = rad;
        theta = thet;
    }
    void display()
    {
        cout<<"radius = "<<radius<<" and theta = "<<theta<<endl;
    }
};
class Rectangle //source
{
    float x, y;
    public:
    Rectangle()
    {
        x=0;
        y=0;
    }
    Rectangle(float x1, float y1)
    {
        x= x1;
        y = y1;

    }
    operator Polar()
    {
        float r = sqrt(x*x+y*y);
        float t = atan(y/x);
        return(Polar(r, t));

    }
    void display()
    {
        cout<<"x = "<<x<<" and y = "<<y<<endl;
    }
};

int main(void)
{
    Rectangle(12, 5);
    Polar pol;
    pol.display();
}