#include <iostream>
using namespace std;
int &max(int &x, int &y)
{
    if(x>y)
    {
        return x;
    }else
    {
        return y;
    }
}
int main(void)
{
    int a = 5, b=40;
    max(a, b) = -5;
    cout<<"a: "<<a<<" b: "<<b<<endl;
}