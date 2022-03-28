#include <iostream>
using namespace std;
//class type -> inch
//basic type -> feet
//class to basic
class dist
{
    float inch;
    public:
    dist(float x)
    {
        inch = x;
    }
    operator float()
    {
        float ft = (inch/12);
        return ft;
    }
};

int main(void)
{
    dist d(60);
    float f;
    f=d;
    cout<<d<<endl;

}