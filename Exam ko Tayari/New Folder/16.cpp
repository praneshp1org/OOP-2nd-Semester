#include <iostream>
using namespace std;
//float &smaller(float&, float&);
float &smaller(float &x, float &y)
{
    return (x<y)?x:y;
}
int main(void)
{
    float a = 5, b=6;
    float avg = (a+b)/2;
    smaller(a, b)=avg;
    cout<<a<<endl<<b<<endl;

}
