#include <iostream>
using namespace std;
void divide(double x, double y)
{
    try{
        if(y==0.0) throw y;
        else
        {
            cout<<"Division is "<<x/y<<endl;
        }

    }catch(double)
    {
        cout<<"Exception occured!"<<endl;
        throw;
    }
}
int main(void)
{
    try
    {
        divide(10.4, 2.2);
        divide(10.1, 0.0);
    }catch(double)
    {
        cout<<"Double caught!"<<endl;
    }
}