#include <iostream>
using namespace std;
inline float si(float p, float t=2, float r=0.05)
{
    return (p*t*r);
}

int main(void)
{
    float p, s;
    cout<<"Enter p: "<<endl;
    cin>>p;
    s=si(p);
    cout<<"Simple interest: "<<s<<endl;
}