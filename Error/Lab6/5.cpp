#include <iostream>
using namespace std;
void test(int x)
{
    try{
        if(x==1) throw x;
        else if(x==0) throw 'x';
        else if(x==-1) throw 1.0;
        else if(x==2) throw 1;
        cout<<"End of try block."<<endl;
    }catch(char c)
    {
        cout<<"Caught character\n";
    }
    catch(int m)
    {
        cout<<"Caught integer\n";
    }
    catch(double d)
    {
        cout<<"Caught double\n";
    }
    cout<<"End of catch block."<<endl;
}
int main(void)
{
    test(1);
    test(0);
    test(-1);
    test(2);
}