#include <iostream>
using namespace std;
void divide(double x, double y)
{
    cout<<"Inside function"<<endl;
    try
    {
        if(y==0.0)
        {
            throw y; //throwing double
        }
        else
        {
            cout<<"Division = "<<x/y<<endl;
        }
    }catch(double)
    {
        cout<<"Caught double inside function";
        throw; //rethrowing double
    }
    cout<<"End of function"<<endl;
};
int main(void)
{
    cout<<"Inside main"<<endl;
    try
    {
        divide(10.5, 2.0);
        divide(10.5, 0.0);

    }catch(double)
    {
        cout<<"Caught double inside main."<<endl;
    }
    cout<<"End of main."<<endl;
}