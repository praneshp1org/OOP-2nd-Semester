#include <iostream>
#include <cmath>

using namespace std;
class complex
{
    int r, i;
    public:
    complex()
    {

    }
    complex(int r1, int r2)
    {
        r=r1;
        i=r2;
    }
    int operator<(complex c2)
    {
        float mag1 = sqrt((r*r)+(i*i));
        float mag2 = sqrt((c2.r*c2.r)+(c2.i*c2.i));
        return (mag1<mag2)?1:0;
    }
};

int main(void)
{
    complex c1(4, 3), complex c2(5, 4);
    if(c1<c2)
    {
        cout<<"First is lesser."<<endl;
    }

}