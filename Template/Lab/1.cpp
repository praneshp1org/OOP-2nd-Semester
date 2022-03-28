#include <iostream>
using namespace std;

template <class T>
T getMax(T a, T b)
{
    T result;
    result = (a>b)?a:b;
    return result;
}
int main(void)
{
    int i=5, j=6, k;
    int l=10.0, m=50.7, n;
    k = getMax<int>(i, j);
    n = getMax<float>(l, m);
    cout<<k<<endl;
    cout<<m<<endl;
}