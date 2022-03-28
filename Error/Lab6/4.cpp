#include <iostream>
using namespace std;
void func(int a)
{
    try
    {
        if(a==0)
    {
        throw 0.5;
    }
    if(a==1)
    {

        throw 's';
    }
    }
    catch(...)
    {
        cout<<"Caught exception!"<<endl;
    }

}
int main(void)
{
    func(0);
    func(1);
    func(2);
}