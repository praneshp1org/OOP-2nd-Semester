#include <iostream>
#define PI 3.1415
using namespace std;
float area(int b, int h)
{
    return (0.5*b*h);
}
float area(int r)
{
    return (PI*r*r);
}
float area(float l,float b)
{
    return (l*b);
}
int main(void)
{
    int b=2, h=4, r=1;
    float l=10, br=5;
    cout<<"Area: "<<area(b, h)<<endl;
    cout<<"Area: "<<area(r)<<endl;
    cout<<"Area: "<<area(l, br)<<endl;

}