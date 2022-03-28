#include <iostream>
using namespace std;
int main(void)
{
    int a, b;
    cout<<"a and b: "<<endl;
    cin>>a>>b;
    int x = a-b;
    try
    {
        if(x!=0)
        {
            cout<<"Result = "<<(a/x)<<endl;
        }
        else
        {
            throw x;
        }
    }catch(int i)
    {
        cout<<"Division by zero not possible."<<endl;
    }
    cout<<"END!"<<endl;
}