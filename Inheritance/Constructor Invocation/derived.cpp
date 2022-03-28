#include <iostream>
using namespace std;

class Base
{
    
};
class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"BAse called."<<endl;
    }
};
int main(void)
{
    Derived objD;
}