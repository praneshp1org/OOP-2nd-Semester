#include <iostream>
#include <cmath>
using namespace std;
void sqroot(float n)
{
    try
    {
        if(n<0)
        {
            throw n;
        }else
        {
            cout<<"The square root is: "<<sqrt(n)<<endl;
        }
    }catch(float)
    {
        cout<<"Error occurred!....";
    }
}
int main(void)
{
    cout<<"Main method..."<<endl;
    sqroot(68);
}