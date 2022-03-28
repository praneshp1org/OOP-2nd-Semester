#include <iostream>
using namespace std;
int &max(int &x, int &y)
{
    return (x>y?x:y);
}
int main(void)
{
    int a=5, b=9;
    cout<<"Before swapping: a= "<<a<<" and b= "<<b<<endl;
    max(a, b)=-10;
    cout<<"a= "<<a<<" and b= "<<b;
}


