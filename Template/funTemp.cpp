#include <iostream>
using namespace std;

template <class T>
T getMax(T a, T b)
{
    T res;
    res = (a>b)?a:b;
    return res;

}
int main(void)
{
    int k = getMax(78, 85);
    float i = getMax(1.7, 0.5);
    cout<<k<<endl;
    cout<<i<<endl;
}