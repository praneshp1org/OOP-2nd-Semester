#include <iostream>
using namespace std;
void divide(double x, double y)
{
    try
    {
        if(y==0.0)
        {
            throw x;
        }else
        {
            cout<<"After division: "<<x/y<<endl;
        }
    }catch(double)
    {
        cout<<"Caught error inside function.."<<endl;
        throw;
    }
}
int main(void)
{
    try
    {
        divide(10.6, 0.0);
    }catch(double)
    {
        cout<<"Inside main..."<<endl;
    }
}