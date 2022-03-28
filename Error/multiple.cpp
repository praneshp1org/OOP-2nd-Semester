#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if(x==1) throw x;
        else if(x==-1) throw 'c';
        else if(x==0) throw 1.0;

    }catch(int)
    {
        cout<<"Integer caught"<<endl;
    }catch(double)
    {
       cout<<"Double caught"<<endl;
    }catch(char)
    {
        cout<<"Character caught"<<endl;
    }
}
int main(void)
{
    test(1);
}